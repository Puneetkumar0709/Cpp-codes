#include<iostream>
using namespace std;

int main(){
    int array[]={1,0,1,0,1,0,0,1};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        if(array[i]==0){
        sum++;
        }
    }
    
    for( int i=0;i<size;i++){
        if(i<sum){
            array[i]=0;
        }
        else{
            array[i]=1;
        }
    }
    for(int i=0;i<size;i++)
    cout<<array[i]<<" ";
    
    return 0;
}

