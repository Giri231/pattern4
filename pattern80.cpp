#include<iostream>

using namespace std;

int main()
{

    int i,j;

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j==3 || i==5 || (j==3-i && i<=3) )
                {
                    cout<<"* ";

                }
                else

                {
                    cout<<"  ";
                }
            }

            cout<<"\n";
        }
}


