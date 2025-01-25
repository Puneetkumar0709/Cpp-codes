#include<iostream>
#include<string.h>
using namespace std;
class Record{
    private:
    static int count;
    string name;
    unsigned long long enrollment_no ;
    string DOB;
    int percent;
    public:
      void setData(){
        count++;
        cout<<"enter the name of the student : ";
        cin>>name;
        cout<<"enter the enrollment no. : ";
        cin>>enrollment_no ;
        cout<<"enter the date of birth day : ";
        cin>>DOB;
        cout<<"enter the percentage of 12th : ";
        cin>>percent;
      }
      void getdata(){
        cout<<"Name = "<<name<<endl;
        cout<<"enrollment no.= "<<enrollment_no <<endl;
        cout<<"Date of birth = "<<DOB<<endl;
        cout<<"Prercent = "<<percent<<endl;
      }
      void displaycount(){
        cout<<"number of student in the list is "<<count<<endl;
      }

}; 
 int Record::count;
int main(){
   
   Record r1,r2;
   r1.setData();
   r2.setData();
   r1.getdata();
   r2.getdata();
   r2.displaycount();
}
