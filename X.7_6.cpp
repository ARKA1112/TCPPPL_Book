#include <iostream>
using namespace std;

void sizer()
{
    int a;
    double b;
    int* p = &a;
    double* q = &b;
    cout<<"size of double is "<<__SIZEOF_DOUBLE__<<'\n';
    cout<<"size of pointer is "<<sizeof(*p)<<'\n';
    cout<<"size of int is "<<sizeof(int)<<'\n';
    cout<<"size of pointer is  "<<sizeof(*q)<<'\n';
       
}

int main()
{
    sizer();
}