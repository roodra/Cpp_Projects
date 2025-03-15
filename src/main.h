#ifndef MAIN_H
#define MAIN_H
#define MAX 3 

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
void displayMemoryUsage();

class Stack
{
    private:
        int top;
        int arr[MAX];

    public:
        Stack();
        bool isFull();
        bool isEmpty();
        void push(int value);
        void pop();
        int peek();
        void display(); 
};


class car
{
    private:
        char a;
        int b;

    public:
        car();
        int add(int b);
};



#endif