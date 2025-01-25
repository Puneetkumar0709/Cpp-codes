#include<iostream>
using namespace std;
int main(){
    int ar[]={1,5,4,2,6,1,2,4,5};
    int size=sizeof(ar)/sizeof(ar[1]);

   
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ar[i]==ar[j]){
                ar[i]=ar[j]=-1;
              
            }  
        }
    }
     //-1,-1,-1,-1,6,-1,-1,-1,-1
    for(int i=0;i<size;i++){
        if(ar[i]>0){
            cout<<"element is unique at index :"<<i<<endl;
        }

    }
    return 0;
}