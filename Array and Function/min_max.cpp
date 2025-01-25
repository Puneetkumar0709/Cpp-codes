#include<iostream>
using namespace std;
int max(int*array, int n){
    int temp=array[0];
    for(int i=1;i<n;i++){
        if(temp<array[i]){
            temp=array[i];
        }
    }

    return temp;
}
int min(int*array, int n){
    int flag=array[0];
    for(int i=1;i<n;i++){
        if(flag>array[i] ){
            flag=array[i];
        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the max element : "<<max(arr,n)<<endl<<"the min element : "<<min(arr,n);

    return 0;
}