#include <iostream>
using namespace std;
/*Print a..z along with their integer values*/
void demon()
{

    for(int j = 0;j<=255;++j)
    {
        if(char(j) == 'a')
        {
            while (j < int('z') +1)
            {
                cout<<char(j)<<" int value is "<<j<<'\n';
                ++j;
            }
        }
    }

    /*for (int i=0;i<10;++i)
    {
        cout<<i<<'\n';
    }*/
}

int main()
{
    demon();
}