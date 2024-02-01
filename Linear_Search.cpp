//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int size ,num;
    cout<<"Enter the size of Array: "<<endl;
    cin>>size;
    cout<<"Enter the Element of Array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Element to Search: "<<endl;
    cin>>num;
    for(int j=0; j<size; j++)
    {
        if(a[j]== num)
        {
            cout<<"Element Found at "<<j<<" indexing "<<endl;
        }
    }
}
