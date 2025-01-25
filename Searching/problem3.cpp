#include<iostream>
using namespace std;
int lower(int *array,int n,int target){
    int low=0;
    int high=n-1;
   
    while(low<=high){
        int mid= (low+high)/2;
        if(array[mid]==target && array[mid-1]!=target){
            return mid; 
        }
        else if(array[mid]<target){
            low=mid+1;
        }
        else
        high=mid-1;
    }
}
int upper(int *array,int n,int target){
    int low=0;
    int high=n-1;
   int ans=-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(array[mid]>target  ){
            ans=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
        
    }
    return ans-1;
}
int main(){
    int array[]={1,1,2,2,2,5,8,8};
    int n=sizeof(array)/sizeof(array[0]);
    int target=2;
    cout<<lower(array,n,target)<<endl;
    cout<<upper(array,n,target)<<endl;
}