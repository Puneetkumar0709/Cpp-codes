/*in insertion sort we divide the the array into 2 subarray 1.sorted and 2nd is unsorted .
in each set we pick a element from unsorted subarray and put it on the right positin of sorted subarray*/ 


#include<iostream>
using namespace std;
int main(){
    int array[5]={11,8,15,9,4};
    int n= sizeof(array)/sizeof(array[0]);
    for(int i=1;i<n;i++){      // here in each step we are picking 1 element from unsorted array
        int current=array[i];
        int j=i-1;                       //start putting elements in sorted array
        while(j>=0 && array[j]>current){
            array[j+1]=array[j];         //shifting of elements
            j--;
        }

        array[j+1]=current;       // j reached at position just where the condition of while is failed

    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
}