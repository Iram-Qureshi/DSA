#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int n[],int mid, int first,int last,int size, int num)
{
     if(n[first]== num)
        {
            cout<<"Element Found at "<<first<<" indexing "<<endl;
        }
        else if(n[first]> num)
        {
            last= mid-1;
        }
        else if(n[mid]<num)
        {
            first = mid+1;
        }
        else if (num>n[last])
        {
            cout<<"Element Found at -1 indexing "<<endl;
        }
        return binary(n,mid,first,last,size,num);
}
int main()
{
    int n[100];
    int size ,num;
    int mid =size/2;
    int first =0;
    int last = size-1;
    cout<<"Enter the size of Array: "<<endl;
    cin>>size;
    cout<<"Enter the Element of Array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>n[i];
    }
    cout<<"Enter the Element to Search: "<<endl;
    cin>>num;
    cout<<num<<" find at "<<binary(n,mid,first,last,size,num)<<" indexing";
    
}