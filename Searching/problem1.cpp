//Q). Find the 1st occurence of element in sorted array

#include<iostream>
using namespace std;
int binary_search(int *array,int size, int target){
    int low=0;
    int high=size-1;
    while (low<=high){
        int mid=(low+high)/2;
      
      if(array[mid]==target && array[mid-1]!=target){
        return mid;
      }
      else if (array[mid]<target){
        low=mid+1;
      }
      else
      {
       high=mid-1;
      }
      
    }
    return -1;
    
}

int main(){
    int array[]={2,5,5,5,5,6,6,8,9,9};
    int n=sizeof(array)/sizeof(array[0]);
    int target=9;

    cout<<binary_search(array,n,target);
}