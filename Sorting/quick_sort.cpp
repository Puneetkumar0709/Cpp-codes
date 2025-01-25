#include<iostream>
using namespace  std;
int partition(int array[],int first,int last){    // this function return the correct index of pivot
    int pivot=array[last];
    int i=first-1; //insertimg elements < pivot
    for(int j=first;j<last;j++){     //finding elements less than pivot
        if(array[j]<pivot){
            i++;
            swap(array[i],array[j]);
        }
    }
    // now i is pionting to the last element less than pivot
    //correct postion of pivot =i+1
    swap(array[i+1],array[last]);

    return (i+1);
}

void quicksort(int array[], int first, int last){
    if(first>=last) return;   //base case
    int pi = partition(array,first,last);

    quicksort(array,first,pi-1);
    quicksort(array,pi+1,last);
}
int main(){
    int array[]={18,12,32,16,35,20};
    int n =sizeof(array)/sizeof(array[2]);

    quicksort(array,0,n-1);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}