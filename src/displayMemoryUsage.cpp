#include "main.h"
#include <thread>
#include <chrono>
#include <windows.h>
#include <iostream>


void displayMemoryUsage() {
    MEMORYSTATUSEX memStatus;
    memStatus.dwLength = sizeof(memStatus);

    while (true) {
        if (GlobalMemoryStatusEx(&memStatus)) {
            DWORDLONG totalPhysMem = memStatus.ullTotalPhys;
            DWORDLONG availPhysMem = memStatus.ullAvailPhys;
            DWORDLONG usedPhysMem = totalPhysMem - availPhysMem;
            double memUsagePercent = (double(usedPhysMem) / totalPhysMem) * 100;

            system("cls");  // Clears console screen for continuous updates (Windows only)
            std::cout << "==============================" << std::endl;
            std::cout << "      RAM Usage Monitor       " << std::endl;
            std::cout << "==============================" << std::endl;
            std::cout << "Total Physical Memory: " << totalPhysMem / (1024 * 1024) << " MB" << std::endl;
            std::cout << "Available Memory:      " << availPhysMem / (1024 * 1024) << " MB" << std::endl;
            std::cout << "Used Memory:           " << usedPhysMem / (1024 * 1024) << " MB" << std::endl;
            std::cout << "Memory Usage:          " << memUsagePercent << " %" << std::endl;
            std::cout << "==============================" << std::endl;

        } else {
            std::cerr << "Failed to retrieve memory status!" << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1)); // Updates every second
    }
}