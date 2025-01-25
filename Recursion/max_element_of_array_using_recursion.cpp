#include<iostream>
using namespace std;

int f(int*array, int idx,int n){  //this function find the max element in the array starting from index idx
    //base case
    if(idx==n-1){
    return array[idx];
    }
      //assume that the function gives the maximum element in the array startin from index idx+1;
    return max(array[idx],f(array,idx+1,n));

    //self work = compare the max value from the function to the array[idx]

}
int main(){
    
    int array[3]={8,7,5};
    int max= f(array,0,3);
    cout<<" maximum element of array : "<<max<<endl;

    return 0;
}