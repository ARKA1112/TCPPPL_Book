#include <ostream>
using namespace std;
#include <vector>

vector<string::iterator> find_all(string& s, char c)
{
    vector<string::iterator> res;
    for (auto p=s.begin();p!=s.end();++p)
        if(*p==c)
            res.push_back(p);
    return res;
}

int main()
{}