#include <iostream>
#include <vector>
using namespace std;

// Function to accept the vector by reference (preferred for efficiency)
void inputVector(vector<int> &vec) 
{
    int n;
    cout<< "Enter the size of the vector: ";
    cin>> n;
    vec.resize(n); // Resize the vector to the given size

    cout<< "Enter " << n << " elements:" <<endl;
    for (int i = 0; i < n; ++i) {
        cin>> vec[i]; // Input each element
    }
}