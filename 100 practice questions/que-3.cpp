// C++ Program To Check Whether Number is Even Or Odd

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;

    if(a%2==0)
    {
        cout<<a<<" is a even number"<<endl;
    }
    else
    {
        cout<<a<<" is a odd number"<<endl;
    }
}