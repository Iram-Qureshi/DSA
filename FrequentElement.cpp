#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int s, n,itr=0, f;
    cout<<"Enter size of array: "<<endl;
    cin>>s;
    cout<<"Enter "<<s<<" Elements in Array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Most frequnt Number :"<<endl;
    for(int j=0; j<s;j++)
    {
        for(int i=j+1; j<s;j++)
        {
        if(a[i]==a[j])
        {
            itr++;
             f= a[i];
        }
        }
    }
    cout<<f<<" Repeat "<<itr<<" Times ";

}

