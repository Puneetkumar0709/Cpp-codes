#include<iostream>
using namespace std;
int main(){
    int ar[]={4,5,3,2,6,1};
    int targetsum=11;


    int size=sizeof(ar)/sizeof(ar[1]);
   /* int pairs=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ar[i]+ar[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;*/


 int triplet=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=i+2;k<size;k++)
            if(ar[i]+ar[j]+ar[k]==targetsum){
                triplet++;
            }
        }
    }
    cout<<triplet<<endl;
    return 0;
}