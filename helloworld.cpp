#include <iostream>

int main()
{
    std::cout<<"Hello, World!\n";
}

using namespace std;

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout << "The square of "<<x<<"is"<<square(x);
}