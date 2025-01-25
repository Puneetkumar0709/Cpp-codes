#include<iostream>
using namespace std;

 void f(int*array, int idx , int length){  //this function print the complete the whole array startin from index idx;
    //base case
    if(length==idx)
    return;
    //self work

    cout<<array[idx]<<endl;
    //assumption
    f(array, idx+1 , length);  //assume it will print the complete array from index=idx+1
 }

int main() {

    int array[5]={4,5,2,6};
    
     f(array,0,5);
     return 0;
}