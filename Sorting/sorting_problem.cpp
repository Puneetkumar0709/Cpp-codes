// Q). shift all the zeros to the end w/o changing  respective order ? 
#include<iostream>
using namespace std;
int main(){
 int array[]={0,5,0,3,42};
 int n;
 n=sizeof(array)/sizeof(array[0]);

 for(int i=n-i;i>=0;i--){            //last non zero element
    int j=0; bool flag=false;
    while(j!=i){
        if(array[j]==0 && array[j+1]!=0){
            swap(array[j],array[j+1]);
             flag = true; 
        }
        j++;
    }
    if(!flag) break;
 }
  
  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }

}