#include<iostream>
using namespace std;
int main()
{
    int a[]={7, 12, 9, 15, 32, 56, 70};
    int size= sizeof(a)/sizeof(a[0]);
    int first, sec, third;

    cout<<"Bubble Sort"<<endl;
    for(int j=0 ;j<size; j++)
    {
        for(int i=0;i<size; i++)
        {
            if(a[i]>a[j])
            {
                int t;
                t= a[j];
                a[j]=a[i];
                a[i]=t;
            }
           
       cout<<" "<<a[i]<<" ";
       
        }
         cout<<"\n";
    }
}
