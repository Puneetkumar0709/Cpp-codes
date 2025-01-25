#include<iostream>
using namespace std;

void multiple(int n,int k){
    if(k<1) {
        return;
    }

    multiple(n,k-1);
    cout<<n*k<<" ";
}

int main(){
    int num,k;
    cout<<"enter the number whose multiple we want : ";
    cin>>num;
    cout<<"upto which term we want to print : ";
    cin>>k;

    multiple(num,k);
}