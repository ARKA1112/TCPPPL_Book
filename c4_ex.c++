#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("fewints.txt");
    for(int i=0;i<=100;++i)
    {
        myfile<<i<<'\n';
    }
    myfile.close();
}