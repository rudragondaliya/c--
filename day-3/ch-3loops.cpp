// 1) for loop
// 2) break and continue
// 3) while and do while loop
// 4) questions using operators
// 5) pattern printing problems


#include<iostream>
using namespace std;

int main(){

    // for loop
    // for(int i = 1;i<10;i++)
    // int n;
    // cout<<"enter n:";
    // cin>>n;
    // for (int i = 1; i < n; i++)
    // {
    //     cout<<"hello world!"<<endl;
    // }

    // print 1 to 100 numbers.

    // for(int i = 1; i<=100;i++)
    // {
    //     cout<<i<<endl;
    // }

    // print all even number from 1 to 100.


    // for(int i = 1; i<=100; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
      
    // }

    // print all odd numbers from to 1 to 100.

    // for(int i = 1; i<=100; i++) {
    //     if(i%2!=0) {
    //         cout<<i<<endl;
    //     }
    // }

    // print the table of 19.

    // for(int i = 19; i<=190; i+=19){
    //     if(i%19==0) {
    //         cout<<i<<endl;
    //     }
    // }

    // print the table of n integer by taking user input.

    // int n;
    // cout<<"table of : ";
    // cin>>n;

    // for(int i = n; i<=n*10; i+=n) {
    //         cout<<i<<endl;
    // }


    // display this ap - 1,3,5,7,9 upto n.

    // int n;
    // cout<<"enter n: ";
    // cin>>n;

    // for(int i=1; i<=2*n-1; i+=2){
    //     cout<<i<<endl;
    // }
    

    // int n;
    // cout<<"enter n:";
    // cin>>n;

    // for(int i = 4; i<=3*n+1; i+=3 ) {
    //     cout<<i<<endl;
    // }

// display this gp - 1,2,4,8,16,32.

  int n;
  cout<<"enter n: ";
  cin>>n;
  
  int a = 1;
  for(int i=1;i<=n;i++) {
    cout<<a<<endl;
    a = a*2;
    
  }


    return 0;
}