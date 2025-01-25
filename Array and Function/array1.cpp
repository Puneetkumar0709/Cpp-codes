#include<iostream>
using namespace std;
int main(){

    
    int array[]={8 ,5,6,7};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[1])<<endl;
    int size= sizeof(array)/sizeof(array[0]);
//traversing by for loop
    for(int i=0;i<size;i++)
    {
        cout<<" "<<array[i]<<endl;
        
    }
//traversing by for each loop
     for(int ele:array)   
     {
     cout<<ele<<endl;
     }
//travesring by while loop
   
   int index =0;
   while( index<size){
    cout<<array[index]<<endl;

    index++;
   }
     return 0;
    

}