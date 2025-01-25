#include<iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
     return fact;
}
int main(){
    int a;
    cout<<"enter the no. whose factorial u want to find : ";
    cin>>a;
     int fact=factorial(a);
    return 0;
}