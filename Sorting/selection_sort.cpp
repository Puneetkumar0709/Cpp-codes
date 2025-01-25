#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    //run time array

    for(int i=0;i<n-1;i++){      //for total no. of passes 

    //n-1 passes is required becasue in any array is n-1 element is sorted the the las nth elment will alos get at its true position 
        
        //finding min element 
        int min_index=i;         //let the min index is i
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min_index])        //comparing min element 
              min_index=j;                      //if min element found update the index , on which the min is found 
        }
        if(min_index!=i)                  //min element is getting 1st position
          swap(array[i], array[min_index]);    
    }
   

    cout<<"sorted array "<<endl;

    for(int i=0;i<n;i++){

        cout<<array[i]<<" ";
    }
    
}