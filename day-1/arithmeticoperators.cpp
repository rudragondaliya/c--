#include<iostream>
using namespace std;

int main(){

    int n1 = 8;
    int n2 = 2;

    // arithmetic operators

    cout<<n1 + n2<<endl; // 10
    cout<<n1 - n2<<endl; // 6
    cout<<n1 * n2<<endl; // 16
    cout<<n1 / n2<<endl; // 4
    cout<<n1 % n2<<endl; // 0

    cout<<endl;
    
    // relational operators

    cout<<(n1 == n2)<<endl; 
    cout<<(n1 != n2)<<endl; 
    cout<<(n1 < n2)<<endl; 
    cout<<(n1 > n2)<<endl; 
    cout<<(n1 <= n2)<<endl; 
    cout<<(n1 >= n2)<<endl;

    bool exp1 = true;
    bool exp2 = false;

    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<(!exp1)<<endl;

   cout<<endl;

//    assignment operators
    
    n1+=3;
    cout<<n1<<endl;
    n2-=1;
    cout<<n2<<endl;
    n1/=2;
    cout<<n1<<endl;
    n2%=2;
    cout<<n2<<endl;

    cout<<endl;

    // bitwise operators

   int  a = 4;
   cout<<(a<<1)<<endl;
   cout<<(a>>1)<<endl;


   int c = 5;
   cout<<(a&c)<<endl;
   cout<<(a|c)<<endl;
   cout<<(a^c)<<endl;

   cout<<endl;

//    misc operators

   int r = 5;
   cout<<sizeof(r)<<endl;

   char ch = 'q';
   cout<<sizeof(ch)<<endl;

   float flag = 3.44;
   cout<<sizeof(flag)<<endl;


   bool h ;
   r==ch ? h = true : h = false;
   cout<<h<<endl;

   cout<<(&r)<<endl;


   cout<<endl;

   int t = 4;
   int g = 5;
   cout<<(t++)<<endl;
   cout<<(--g)<<endl;


    return 0;
}