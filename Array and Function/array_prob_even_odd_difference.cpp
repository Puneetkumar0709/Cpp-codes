#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int sum1=0,sum2=0; 
    for(int i=0;i<5;i++){
           //sum1 for even and sum2 for odd
        if(array[i]%2==0){
          sum1+=array[i];
          
        }
        else
         sum2+=array[i];
    }
    cout<<"difference of even odd indices of array :"<<sum1-sum2;
}