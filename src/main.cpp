#include "main.h"
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    std::cout<<multiply(2,3)<<std::endl;

    vector<int> myVec;
    inputVector(myVec);
    printVector(myVec);

    return 0;
}