#ifndef MAIN_H
#define MAIN_H

struct params
{
    int a;
    int b;
    int r;
};

int multiply(struct params p);

int add(struct params p);

void mult(int *a, int *b, int *c);

double euler(double x);

//void inputVector(vector<int> &vec); 

//void printVector(const vector<int> &vec);

#endif