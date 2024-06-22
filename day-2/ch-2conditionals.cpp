#include <iostream>
using namespace std;

int main(){

// take a user iinput of positive integer the number is even or odd
    
    // int n;
    // cout<<"enter a n: ";
    // cin>>n;
    // if(n%2==0) cout<<"even number";
    // if(n%2!=0) cout<<"odd number";


    // int n;
    // cin>>n;
    // if (n%2==0)
    // {
    //     cout<<"even number "<<n<<endl;
    // }
    // else{
    //     cout<<"odd number "<<n<<endl;
    // }


// tke a user input of positive integer while the number is divisible by 5 or not.

    // int n;
    // cout<<"enter a n: ";
    // cin>>n;
    // if(n%5==0) {
    //     cout<<"it is divisible by 5"<<n<<endl;
    // }
    // else {
    //     cout<<"it is not divisible by 5";
    // }

//  take a user input of absolute value 

    // int n;
    // cout<<"enter a n: ";
    // cin>>n;

    // if(n>=0) {
    //     cout<<"number is: "<<n<<endl;
    // }
    // else {
    //     cout<<-n;
    // }


// find profit or loss 

//    int cp;
//    cout<<"enter the cost price: ";
//    cin>>cp;

//    int sp;
//    cout<<"enter the selling price: ";
//    cin>>sp;

//    if(sp>cp) {
//     cout<<"profit is "<<sp-cp<<endl;
//    }
//    else if (cp>sp)
//    {
//      cout<<"loss is "<<cp-sp<<endl;
//    }
//     else{
//         cout<<"no profit no loss";
//     }


// find area of rectangle is greater than its perimeter.

//    int l,b,area,p;
//    cout<<"enter length :";
//    cin>>l;

//    cout<<"enter breadth: ";
//    cin>>b;
   
//    area = l*b;

//    cout<<"area of rectangle is: "<<area <<endl;

//    p = 2*(l*b);
//    cout<<"the perimeter of area of rectangle is :"<<p<<endl;;

//   if(p>area){
//     cout<<"perimeter is greater than area of of rectangle "<<p<<endl;
//   }
//   else{
//     cout<<"perimeter is not greater than area of rectangle ";
//   }


// logical And &&

//    int n;
//    cout<<"enter a n: ";
//    cin>>n;

//    if(n>99 && n<1000) {
//      cout<<"it is three digit number";
//    }
//    else{
//     cout<<"it is not a three digit number";
//    }


// take positive integer input and tell if it is divisible by 5 and 3.

//    int n;
//    cout<<"enter a n: ";
//    cin>>n;

//    if(n%5==0 && n%3==0) {
//     cout<<"it is divisible by 5 and 3 "<<endl;
//    }
//    else{
//     cout<<"it is not divisible by 5 and 3";
//    }

// take positive integer input and tell if it is divisible by 5 or 3.


//  int n;
//    cout<<"enter a n: ";
//    cin>>n;

//    if(n%5==0 || n%3==0) {
//     cout<<"it is divisible by 5 or 3 "<<endl;
//    }
//    else{
//     cout<<"it is not divisible by 5 or 3";
//    }


// take 3 numbers input and they can be the side of a triangle.

    // int a,b,c;
    // cout<<"enter first side: ";
    // cin>>a;
    // cout<<"enter second side: ";
    // cin>>b;
    // cout<<"enter third side: ";
    // cin>>c;

    // if((a+b)>c && (b+c)>a && (c+a)>b) {
    //     cout<<"valid triangle";
    // }
    // else{
    //     cout<<"invalid triangle";
    // }

    // take 3 positive integer input and print the gretest of them.

    // int a,b,c;
    // cout<<"enter a: ";
    // cin>>a;

    // cout<<"enter b: ";
    // cin>>b;

    // cout<<"enter c: ";
    // cin>>c;

    // if(a>b && a>c) {
    //     cout<<a;
    // }
    // else if (b>a && b>c)
    // {
    //     cout<<b;
    // }
    // else{
    //     cout<<c;
    // }

// take 3 positive integer input and print the least of them.

//    int a,b,c;
//    cout<<"enter a: ";
//    cin>>a;

//    cout<<"enter b: ";
//    cin>>b;

//    cout<<"enter c: ";
//    cin>>c;

//    if(a<b && a<c) {
//     cout<<"leat number is: "<<a;
//    }

//    else if (b<a && b<c)
//    {
//     cout<<"least number is: "<<b;
//    }
//    else{
//     cout<<c;
   
// take positive integer input which is divisible by 5 or 3 but not divisible by 15.
    
    // int n;
    // cout<<"enter n: ";
    // cin>>n;

    // if((n%5==0 || n%3==0) && (n%15!=0)) {
    //     cout<<"it is divisible by 5 and 3";
    // }
    // else{
    //     cout<<"it is not divisible by 15";
    // }

// take 3 positive integer input and print the greatest of them.
   
    //  int a,b,c;
    //  cout<<"enter first number: ";
    //  cin>>a;

    //  cout<<"enter second number: ";
    //  cin>>b;

    //  cout<<"enter third number: ";
    //  cin>>c;

    //  if(a>b) {
    //     if(a>c) {
    //         cout<<"greatest "<<a;
    //     }
    //     else{
    //         cout<<c<<" is greatest";
    //     }

    //  }
    //  else{
    //      if(b>c) {
    //         cout<<b<<" is greatest";
    //      }
    //      else{
    //         cout<<c<<" is greatest";
    //      }
    //  }


//    write a program to find age of youngest.

   int ram,shyam,ajay;
   cout<<"enter age of ram: ";
   cin>>ram;

    cout<<"enter age of shyam: ";
   cin>>shyam;
    
     cout<<"enter age of ajay: ";
   cin>>ajay;

   if(ram<shyam) {
    if(ram<ajay) {
        cout<<ram<<" is youngest";
    }
    else{
        cout<<ajay<<" is youngest";
    }
   }
   else{
    if(shyam<ajay){
        cout<<shyam<<" is youngest";
    }
    else{
        cout<<ajay<<" is youngest";
    }
   }

    return 0;
    
}