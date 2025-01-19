// Write a Program to Find the Greatest of the Three Numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"enter the third number:";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is a greatest number"<<endl;
        }
        else
        {
            cout<<c<<" is a greatest number"<<endl;
        }
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                cout<<b<<" is a greastest number"<<endl;
            }
            else
            {
                cout<<c<<" is a greatest number"<<endl;
            }
        }
    }
}