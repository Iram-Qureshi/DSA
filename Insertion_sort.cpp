
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


// Driver code
int main()
{
	int a[100];
    int s;
    cout<<"Enter size of array: "<<endl;
    cin>>s;
    cout<<"Enter "<<s<<" Elements in Array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
	for (int i = 1; i < s; i++) {
	int	key = a[i];
	int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
			
		}
		a[j + 1] = key;
}
cout<<"Sorted Array :"<<endl;
for (int i = 0; i < s; i++){ 
        cout << a[i] << " ";
}
	return 0;
}