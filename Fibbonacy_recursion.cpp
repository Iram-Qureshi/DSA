#include<iostream>
using namespace std;

int fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibbo(n-1) +fibbo(n-2);
    }
}
int main()
{
    int num;
    cout<<"Enter no. to find Fibbonaci Series:"<<endl;
    cin>>num;
    cout<<"Fibbonacci Of "<<num<<" = "<<fibbo(num);
}