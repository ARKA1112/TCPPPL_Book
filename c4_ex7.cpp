//fully answered the question

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vec()
{
    vector<int> s = {5,9,-1,200,0};
    sort(s.begin(),s.end());
    for(int i:s)
    {

        cout<<i<<'\n';
    }
}
int main(){vec();}