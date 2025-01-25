#include<iostream>
using namespace std;
void  countsort(int array[],int n)
{
    //finding max element 
    int max=0;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    //creat a frequency array to count the number
    int freq[max+1]={0};         //need to initialize the array
    for(int i=0;i<n;i++){
        freq[array[i]]++;
    }
    //calculate cummulative frequency array  (update frequency to cumulative frequency to reduce space complexity)
    for(int i=1;i<=max;i++){
        freq[i]+=freq[i-1];
    }
    //create answer array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[array[i]]]=array[i];
    }
    //copy the ans array and paste it in original array
    for(int i=0;i<n;i++){
        array[i]=ans[i];
    }
    
}

int main(){
    int array[]={5,2,3,2,1};
    int n=sizeof(array)/sizeof(array[0]);


    countsort(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    
    return 0;
}