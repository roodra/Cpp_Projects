#include "main.h"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct params
{
    int a;
    int b;
    int r;
};

int main() 
{
    params p;  
    p.a = 2;
    p.b = 3;

    std::cout<<multiply(params p)<<endl;

    return 0;
}