#include<iostream>
using namespace std;

int main(){
    int array[]={5,2,3,2,1};
    int n=sizeof(array)/sizeof(array[0]);
     int max=n+1;
    int freq[max+1];
    for(int i=0;i<n;i++){
        freq[array[i]]++;
    }

    for(int i=0;i<n;i++){
        cout<<freq[i]<<" ";
    }

}