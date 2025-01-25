/*wriet a program to find Kth element in an array using quicksort*/
// worst case time complexity =O(n^2)
#include<iostream>
using namespace std;
int partition(int*array,int first ,int last ){
    int pivot=array[last];
    int i=first-1;
    for(int j=first;j<last;j++){
        if(array[j]<pivot){
            i++;
            swap(array[i],array[j]);
        }
        
    }
    swap(array[i+1],array[last]);

    return i+1;
 }
int k_smallest(int*array,int first ,int last,int k){
    
    int position=partition(array,first ,last);
    if(position-first == k-1){
        return array[position];
    }
    else if(position-first > k-1){
       return  k_smallest(array,first,position-1 ,k);
    }
    else
     return k_smallest(array,position+1,last,k-(position-first+1));

}

 

 

 int main(){
    int array[]={3,5,2,1,4,7,6};
    int n=sizeof(array)/sizeof(array[0]);

    

    int k=7;
    
    cout<<k_smallest(array,0,n,k);

     


 }