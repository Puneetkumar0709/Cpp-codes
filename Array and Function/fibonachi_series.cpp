#include<iostream>
using namespace std;
int main (){
    int n;
    
    cout<<"enter the size of series : ";
    cin>>n;
    int array[n];
    array[0]=0;
        array[1]=1;
        
    for(int i=2;i<n;i++){
        
        array[i]=array[i-2]+array[i-1];
        
       
       
    }
    for(int j=0;j<n;j++){
        cout<<array[j]<< " ";
    }
    
     return 0;
}