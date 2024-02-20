#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int reverceArray(int n[], int size)
{
     swap(n[0],n[size-1]);
    //return reverceArray( 0+1 , size-1);
}
int main()
{
    int num[]={2,3,5,7,9};
    int size=sizeof(num)/sizeof(num[0]);
    cout<<reverceArray(num, size)<<" ";
    
}