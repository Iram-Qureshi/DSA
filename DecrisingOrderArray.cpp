#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int a[]={1,12,23,34,35,45,56};
    int s = sizeof(a) / sizeof(a[0]);

    cout<<" Array "<<endl;
    for(int i=0;i<s;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<"\n";

    sort(a,a+s,greater<int>());

    cout<<"Decending Order: "<<endl;


    for(int i=0;i<s;i++)
    {

        cout<<a[i]<<" ";
    }

    return 0;
}
