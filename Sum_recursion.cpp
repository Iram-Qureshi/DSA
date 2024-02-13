#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n>1)
    
        return n +sum(n-1);
   
}
int main()
{
    int num;
    cout<<"Enter no. to find Sum :"<<endl;
    cin>>num;
    cout<<"Sum Of "<<num<<" = "<<sum(num);
}