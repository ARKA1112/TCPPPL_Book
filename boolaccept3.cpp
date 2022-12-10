#include <iostream>
using namespace std;
//using a while statement
int accept3()
{
    int tries=0;
    while(tries<5){
        cout<<"Do you want to proceed y/n?";
        char answer = 0;
        cin>>answer;
        switch (answer)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout<<"I didnt understand that! try again";
            ++tries; //increments by one
        }
    }
    cout<<"Out of tries and i will take that as a no";
    return false;
}

int main()
{
   cout<<accept3();
}