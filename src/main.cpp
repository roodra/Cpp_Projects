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
#include <thread>
#include <mutex>
#include <random>
#include <iomanip>

using namespace std;

mutex mtx;


// Define matrix size
const int N = 10; // Number of rows
const int M = 10; // Number of columns

using Matrix = std::vector<std::vector<double>>;

// Function to initialize a matrix with random values
Matrix initialize_matrix(int rows, int cols) {
    Matrix mat(rows, std::vector<double>(cols));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0.0, 10.0);
    
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            mat[i][j] = dist(gen);

    return mat;
}

// Function to multiply a row of A with matrix B
void multiply_row(const Matrix& A, const Matrix& B, Matrix& result, int row) {
    for (int j = 0; j < N; ++j) {
        result[row][j] = 0;
        for (int k = 0; k < M; ++k) {
            result[row][j] += A[row][k] * B[k][j];
        }
    }
}

// Multi-threaded matrix multiplication function
void matrix_multiply_multithreaded(const Matrix& A, const Matrix& B, Matrix& result) {
    std::vector<std::thread> threads;

    // Launch threads for each row
    for (int i = 0; i < N; ++i) {
        threads.emplace_back(multiply_row, std::cref(A), std::cref(B), std::ref(result), i);
    }

    // Join threads
    for (auto& t : threads) {
        t.join();
    }
}

// Function to print a matrix
void print_matrix(const Matrix& mat) {
    for (const auto& row : mat) {
        for (double val : row) {
            std::cout << std::setw(8) << std::fixed << std::setprecision(2) << val << " ";
        }
        std::cout << "\n";
    }
}

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

/* //Struct 
    car bmw;
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<bmw.add(a)<<endl;
*/
   // std::cout << "Sum: " << MyLib::add(5, 10) << std::endl;

     // Initialize matrices
     Matrix A = initialize_matrix(N, M);
     Matrix B = initialize_matrix(M, N);
     Matrix result(N, std::vector<double>(N, 0));
 
     // Perform multi-threaded matrix multiplication
     matrix_multiply_multithreaded(A, B, result);
 
    // Print input matrices
    std::cout << "Matrix A:\n";
    print_matrix(A);
    std::cout << "\nMatrix B:\n";
    print_matrix(B);

    // Print the result matrix
    std::cout << "\nResult Matrix (A x B):\n";
    print_matrix(result);

    return 0; 
}
