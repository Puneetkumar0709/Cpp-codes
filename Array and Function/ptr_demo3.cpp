#include<iostream>
using namespace std;
int main(){

    int array[]={1,2,3,8,6};
    int size = sizeof(array)/sizeof(array[0]);
    int *ptr=&array[0];

      for (int i=0;i<size;i++){
        cout<<array+i<<" ";
     }
         
       
    

   
    return 0;
}