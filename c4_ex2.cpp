#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{   
    string line;
    ifstream myfile ("fewints.txt");
    while (getline (myfile,line))
    {
     std::cout<<line<<'\n';   /* code */
    }
    myfile.close();

}


/*This function works perfectly*/