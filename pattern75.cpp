#include<iostream>

using namespace std;

int main()
{

    int i,j,x=2;

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                cout<<x;
                x+=2;
            }

            cout<<"\n";
        }
}

