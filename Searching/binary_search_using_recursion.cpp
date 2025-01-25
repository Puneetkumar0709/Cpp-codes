//have same space and time complexity of O(n log n).
#include<iostream>
using namespace std;
int binarysearch(int array[], int target, int low ,int high){ // this funtn states the target value is [low to high]
    //base case
    if(low>high) return -1;
    
    int mid=(low+high)/2;
     
    if(array[mid]==target) return mid;     

    if(array[mid]<target){
        return binarysearch(array,target ,mid+1,high);
    }

    else
       return binarysearch(array,target,low,mid-1);

}
int main(){
    int array[]={1,2,5,6,9};
    int n=sizeof(array)/sizeof(array[0]);
    int target;
    cout<<"enter the element to find : ";
    cin>>target;

    cout<<" "<<binarysearch(array,target,0,n-1);

    return 0;
}