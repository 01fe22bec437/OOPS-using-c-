#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cout<<"enter the number : ";
    cin>>n;

    a=n++;
    cout<<"post increment :"<<a<<"\n";
     b=++n;
    cout<<"pre increment :"<<b<<"\n";
     c=n--;
    cout<<"post increment :"<<c<<"\n";
     d=--n;
    cout<<"pre increment :"<<d<<"\n";

}