#include<iostream>
using namespace std;
int sum(int *array,int idx,int n)
//this function calculate the sum of array starting from index idx 
{
    //base case
    if(idx==n-1){
        return array[idx];
    }
    //assume that the function calculate the sum of array starting from index idx+1;
    return (array[idx]+sum(array,idx+1,n));  
    //self work = add array[idx] to the sum of array

}

int main(){
    int arr[5]={1,5,2,7,6};
    int answer= sum(arr,0,5);
    cout<<answer<<endl;
    return 0;
}