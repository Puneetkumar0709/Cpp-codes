#include<iostream>
using namespace std;
 int fact=1;
int  factorial(int num){
   
    for(int i=num;i>=1;i--){
        fact*=i;
    }
   
   return fact;
}
int  combination(int num1,int num2){
    int comb= (factorial(num1)/factorial(num2)*factorial(num1-num2));
    return comb;
}
 int main(){
    int num;
    cout<<" enter the row of pascal triangle : ";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
 }