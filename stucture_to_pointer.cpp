#include<iostream>
using namespace std;

struct Book
{
    string author;
    int pages;
    int price;
};
int main()
{
    Book rec, *ptr;
    ptr=&rec;
    cout<<"Enter Author Name:"<<endl;
    cin>>ptr->author;
    cout<<"Enter pages :"<<endl;
    cin>>ptr->pages;
    cout<<"Enter Price : "<<endl;
    cin>>ptr->price;
    cout<<"You Entered:"<<endl;
    cout<<"Author. = "<<ptr->author<<endl;
    cout<<"Pages = "<<ptr->pages<<endl;
    cout<<"Price = "<<ptr->price<<endl;
    return 0;
}