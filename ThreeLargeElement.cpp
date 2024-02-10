#include<iostream>
using namespace std;
int main()
{
    int a[]={7, 12, 9, 15, 32, 56, 70};
    int size= sizeof(arr)/sizeof(arr[0]);
    int first, sec, third;

    for(int j=0 ;j<size; j++)
    {
        for(int i=0;i<size; i++)
        {
            if(a[i]>a[j]
            {
                int t;
                t= a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        for(int k=size-1;k==0;k--)
        {
            if(k==size-4)
            {
                break;
            }
            else {
                cout<<" "<<a[k]<<" ";
            }
        }
    }
}