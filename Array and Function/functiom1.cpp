#include<iostream>
using namespace std;
int square( int num1){
    int result= num1*num1;
    return result;
}

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        cout<<square(i)<<" ";
    }
    return 0;
}