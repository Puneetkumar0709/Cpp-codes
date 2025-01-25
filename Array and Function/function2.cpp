#include<iostream>
using namespace std;
float area(int radius ){
    float result= 3.14*radius*radius;
    return result;
}
int main(){
    int r;
     cin>>r;
     cout<<"radius of circle ="<<r<<endl;
   
   

    cout<<"area of circle ="<<area(r)<<endl;
    return 0;

}