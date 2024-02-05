#include<iostream>
using namespace std;
int main()
{
    int a[] ={3,1,5,7,9};
    int b[]= {3,7,5,9};

    
    int sa= sizeof(a)/sizeof(a[0]);
    int sb= sizeof(b)/sizeof(b[0]);
    for(int i=0; i<sa; i++)
    {
        for(int j=i+1; j<sb; j++)
        {
            if(a[i]>b[j])
            {
               int temp;
               temp=b[i];
               b[i]=b[j];
               b[j]= temp;
            }            
        }
    }
    for (int i = 0; i < sb; i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i];
            break;
        }
    }
    
}