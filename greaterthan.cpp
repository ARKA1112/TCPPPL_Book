#include <ostream>
#include <vector>
using namespace std;


struct Greater_than {
    int val;
    Greater_than(int v):val{v}{}
    bool operator()(const pair<string,int>& r){return r.second>val;}
};

int main()
{
    
}