#include<iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==i || j==6-i)
            {
                cout<<"x";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
