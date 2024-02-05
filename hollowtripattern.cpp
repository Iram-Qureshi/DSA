#include<iostream>
using namespace std;
int main()
{
    int r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j|| j==1|| j==r|| i==r)
            {
            cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}