#include<iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j)
            {
                cout<<"o";
            }
            else
            {
                cout<<"x";
            }
        }
        cout<<"\n";
    }
}
