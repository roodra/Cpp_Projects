#include "main.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>
#include <Psapi.h>
#include <thread>
#include <chrono>
#include <stdio.h>
#include "mylib.h"

using namespace std;

/*
SIZE_T getMemoryUsage()
{
    PROCESS_MEMORY_COUNTERS memInfo;
    GetProcessMemoryInfo(GetCurrentProcess(), &memInfo, sizeof(memInfo));
    return memInfo.WorkingSetSize; // Memory usage in bytes
}
*/

int main() 
{

/*
    cout<<"Enter an integer:";
    cin>>p.a;
    cout<<"Enter another integer:";
    cin>>p.b;
    cout<<"Multiplication result is:";
    cout<<multiply(p);
    std::cout << "Memory usage: " << getMemoryUsage() / 1024 << " KB" << std::endl;
    displayMemoryUsage(); 
*/
/*
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    std::cout << "Top element: " << s.peek() << "\n";
*/

/*
    car bmw;
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<bmw.add(a)<<endl;
*/
    std::cout << "Sum: " << MyLib::add(5, 10) << std::endl;

    return 0;
}
