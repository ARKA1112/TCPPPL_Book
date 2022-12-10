#include <iostream>
using namespace std;
bool accept2()
{
  cout<< "do you want to proceed y/n?";

  char answer = 0;
  cin >> answer;

  switch(answer){
  case 'y':
    return true;
  case 'n':
    return false;
  default:
    cout << "I will take for a no";
    return false;
  }
}

int main()
{
  cout<<accept2();
}