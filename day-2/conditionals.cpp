// if-else

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    if(num % 2 == 0){
        cout<<num<<" it is a even number"<<endl;
    }
    else{
        cout<<num<<" it is a odd number"<<endl;
    }

    // if-else if

    int age;
    cin>>age;

    if(age>0 && age<=12){
        cout<<"child"<<endl;
    }
    else if(age>=12 && age<=18){
        cout<<"teenager"<<endl;
    }
    else{
        cout<<"adult"<<endl;
    }


    // logical AND

    int n1;
    cin>>n1;

    if((n1%2==0) && (n1%3==0)){
        cout<<n1<<endl;

    }

    // logical OR

    int n2;
    cin>>n2;

    if((n2%3==0) && (n2%5==0)){
        cout<<n2<<endl;
    }

}



