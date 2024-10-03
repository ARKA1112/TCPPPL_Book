#include <iostream>
using namespace std;

int x = std::numeric_limits<int>::max();

double d = x;
int y = x;

int main(){
    static_assert(sizeof(x)==sizeof(y));
}