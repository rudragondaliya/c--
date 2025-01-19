// Write a C++ Program to Check Whether a Number is a Positive or Negative Number.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a<0)
    {
        cout<<a<<" is a negative number"<<endl;
    }
    else if(a==0)
    {
        cout<<a<<" is a netural number"<<endl;
    }
    else{
        cout<<a<<" is a positive number"<<endl;
    }
}