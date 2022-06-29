#include<iostream>

using namespace std;

int main()
{

    int i,j,x=1;

    for(i=1;i<=7;i++)
        {
            for(j=1;j<=7;j++)
            {
                if(j==4 || i==4 || i==j || j==8-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }

            cout<<"\n";
        }
}

