#include<iostream>
using namespace std;
int main()
    {
        int num1 ,num2;
        cout<<"entre 2 number "<<endl;
        cin>>num1>>num2;
          
          
         cout<<"entre the operator (+,-,*,/)"<<endl;
         char op;
         cin>>op;
         switch (op)
         {case '+':
         cout<<"sum of 2 number is = "<<num1+num2;
         break; 
         case '-':
         cout<<"difference is ="<< num1-num2;
         break;
         case '*':
         cout<< "multiplication"<<num1*num2;
         break;
         default:
         cout <<"entre a valid operatoer";
         break;
         }
         return 0;



    }
