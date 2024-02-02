#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int s)
    {
        int min,j;
        for(int i=0; i<s;i++)
        {
            min=i;
        for (j = i + 1; j < s; j++) 
        { 
            if (a[j] < a[min]) 
                min = j; 
        } 
  
        // Swap the found minimum element 
        // with the first element 
        if (min != i) 
            swap(a[min], a[i]); 
            
        } 
    }
   void printArray(int a[], int s) 
{ 
    int i; 
    for (i = 0; i < s; i++) { 
        cout << a[i] << " ";  
    } 
}
 
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
     
    sort( a ,s);
   cout<<" Sorted Array "<<endl;
 printArray( a,  s) ;
 return 0;
}
    
    