#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;

    return (sum(n-1)+((n%2==0)?(-n):n));
}
int main (){
    int num;
    cout<<"enter the terms of series : ";
    cin>>num;

    int result=sum(num);
    cout<<result;

    return 0;

}