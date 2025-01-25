#include<iostream>
using namespace std;
class employe{
   string name;
   string id_number;
   float turnover;
   string mobile_no;
   public :
   void setData(){
    cout<<" enter the name of employee :";
    cin>>name;
    cout<<"enter the ID number of the employee :";
    cin>>id_number;
    cout<<"amount of total sale : ";
    cin>>turnover;
    cout<<"enter the mobile number : ";
    cin>>mobile_no;
   }

    void getData(){
        cout<<"Name : "<<name;
        cout<< "ID NUMBER : "<<id_number;
        cout<<" Turnover : "<<turnover;
        cout<<" Mbolie no. : "<<mobile_no;
        
    }
    int main(){
        employe e1,e2,e3;

        e1.setData();
        e1.getData();
        e2.setData();
        e2.getData();

       
    }

   
};