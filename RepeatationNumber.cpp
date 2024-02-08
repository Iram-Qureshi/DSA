#include <iostream>

using namespace std;

int main()
{

    int a[100];
    int s, n;
    cout<<"Enter size of array: "<<endl;
    cin>>s;
    cout<<"Enter "<<s<<" Elements in Array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter no. who's repetation will find: "<<endl;
    cin>>n;
    int itr=0;
    for(int j=0; j<s;j++)
    {
        if(n==a[j])
        {
            itr++;
        }
    }
    cout<<n<<" Repeat "<<itr<<" Times"<<endl;
    return 0;
}
