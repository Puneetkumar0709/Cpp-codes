#include<iostream>
using namespace std;
int main(){
   
    int array[] ={8,2,5,41};
    int size= sizeof(array)/sizeof(array[1]);
    
    for(int i=0;i<size-1;i++){        // loop for total passes (no. of passes = size-1)
      for(int j=0;j<size-1-i;j++){    //loop for comparison in one traversing (no. of comparison = size-1-no. of pass)
         if(array[j]>array[j+1])
          swap(array[j],array[j+1]);
      }

    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
    
}