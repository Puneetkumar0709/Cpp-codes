#include<iostream>
using namespace std;
int sum(int n){
    if(n>=0 && n<=9)
    return n;
    
    return sum(n/10)+n%10;

}

int main(){
    int num;
    cout<<"enter the num to find sum of digit : ";
    cin>>num;

    sum(num);
    return 0;
}