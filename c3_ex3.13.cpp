#include<iostream>
#include<vector>
using namespace std;


void deffer()
{
    vector<string> words;
    string cums;
    while (cums!="exit")
        {
            cout<<"Enter word";
            cin>>cums;
            words.push_back(cums);
        };
    for (auto i: words)
        {
            cout<<i<<endl;
        }
}

int main()
{
    deffer();
}