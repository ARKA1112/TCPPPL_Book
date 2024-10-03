#include <iostream>

void f(int){};
void e(double){};



void g(int i, double d)
{
    f(i);
    e(double{i}); //This is a narrow conversion
    f(d);
    //f(int{d});
}

int main()
{
    g(42, 3.14);
    //g(42,42);
    return 0; 
}