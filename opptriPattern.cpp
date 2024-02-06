#include<iostream>
using namespace std;
int main()
{
    int r=4;
    for(int i=r;i>=1;i--)
    {
        for(int j=r;j>=i;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}