#include <iostream>
#include <list>

//Write a loop that prints out the values 4, 5, 9, 17, 12 without using an array or a vector
//implemented using list

using namespace std;

int demon()
{
    list<int>a {4,5,9,12};
    for (int x:a)
    {
        cout<<x<<'\t';
    }
}

int main()
{
    demon();
}