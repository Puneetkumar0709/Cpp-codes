#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose factorial u want to find : ";
    cin>>n;
    int  fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
    cout<<"factorial="<<fac;
    return 0;
}