#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the Value of rows: "<<endl;
    cin>>n;
    cout<<"Enter the Value of colums: "<<endl;
    cin>>m;
    int a[n][m],b[n][m];
    int c[n][m]; 
    cout<<"Enter the Vales of first Array: "<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
             cin>>a[i][j];
        }
    }
    cout<<"Enter the Vales of Second Array: "<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
             cin>>b[i][j];
        }
    }

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
             c[i][j] = a[i][j] + b[i][j];
             cout<<" "<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}