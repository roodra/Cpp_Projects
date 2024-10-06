#include <iostream>
#include <vector>
using namespace std;


void printVector(const vector<int> &vec) 
{
    cout << "The elements in the vector are: ";
    for (const int &elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}