#include<iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=3;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {

           if(k==6-i || k==4+i)
           {


                cout<<i <<" " ;
           }
           else
           {
               cout<<" ";
           }
        }

        cout<<"\n";
    }
}
