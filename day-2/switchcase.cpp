#include<iostream>
using namespace std;

int main(){

    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Monday"<<endl;
        break;

        case 2:
        cout<<"tueday"<<endl;
        break;

         case 3:
        cout<<"wednesday"<<endl;
        break;

         case 4:
        cout<<"thursday"<<endl;
        break;

         case 5:
        cout<<"friday"<<endl;
        break;

         case 6:
        cout<<"saturda"<<endl;
        break;

         case 7:
        cout<<"sunday"<<endl;
        break;

         default:
        cout<<"error"<<endl;
        break;
    }

     char ch;
     cin>>ch;

     switch (ch)
     {
         case  'a':
         cout<<"vowel"<<endl;
         break;

         case  'e':
         cout<<"vowel"<<endl;
         break;

         case  'i':
         cout<<"vowel"<<endl;
         break;

         case  'o':
         cout<<"vowel"<<endl;
         break;

         case  'u':
         cout<<"vowel"<<endl;
         break;
     
     default:
        cout<<"consonanents"<<endl;
        break;
     }
}