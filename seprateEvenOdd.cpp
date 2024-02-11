
#include<iostream>
using namespace std;
int main()
{
    int a1[]={1,2,3,4,5,6,7,8,9,10};
    int even[]={};
    int odd[]={};
    int size= sizeof(a1)/ sizeof(a1[0]);
    cout<<"Even Array "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; i<size; j++)
        {

        if(a1[i]%2==0)
        {
            even[j]= a1[i];
            cout<<even[j]<<" ";
        }
        }
    }
    cout<<"\n";
    cout<<"Odd Array "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; i<size;j++)
        {

        if(a1[i]%2!=0)
        {
            odd[j]= a1[i];
            cout<<odd[j]<<" ";
        }
        }
    }

}