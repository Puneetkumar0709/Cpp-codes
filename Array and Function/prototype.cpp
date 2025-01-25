#include<iostream>

using namespace std;
int add( int num1 , int num2) ;//prototype //num1 & num 2 is formal pararmeter
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;    //here a&b are the actual parameter
    return 0;
}
int add( int num1,int num2){
    int sum;
    sum=num1+num2;
    return sum;
}