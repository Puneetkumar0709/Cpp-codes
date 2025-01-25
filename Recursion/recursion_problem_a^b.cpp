#include<iostream>
using namespace std;

int power(int p, int q){
    if(q==0) return 1;

    return p*power(p,q-1);
} 

int main (){
    int a ,b ;
    cout<<"enter the base : ";
    cin>>a;
    cout<<"enter the exponential : ";
    cin>>b;

    int result= power(a,b);

    cout<<"a^b="<<result;

    return 0;
}