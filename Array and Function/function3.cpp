#include<iostream>
using namespace std;
void age_check(int num1){
    if(num1>=18){
        cout<<"eligible for vote"<<endl;
    }
    else{
        cout<<"not eligible for vote "<<endl;
    }
   
}
int main(){
    int age;
    cin>>age;
    cout<<"age of candidate ="<<age<<endl;
    age_check(age);
    return 0;
}