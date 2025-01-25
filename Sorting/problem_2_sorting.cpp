// Q). Given 2 sorted array merge these 2 array into a single sorted array
//ans. using concept of merging 2 array

#include<iostream>
using namespace std;
int main(){
    int a[]={5,8,10};
    int b[]={2,7,8};
    int an=sizeof(a)/sizeof(a[0]);
    int bn=sizeof(b)/sizeof(b[0]);

    int array[an+bn];
    int i=0;  //initial position of 1st array
    int j=0;  //initial position of and array
    int k=0;  //initial index of filling array
    while(i<an && j<bn){
        if(a[i]<b[j]){
            array[k++]=a[i++];
        }

        array[k++]=b[j++];
    }
    while(i<an){
        array[k++]=a[i++];

    }
    while(j<bn){
        array[k++]=b[j++];
    } // merging of 2 array complete
 
    for(int p=0;p<(an+bn);p++){
        cout<<array[p]<<" ";
    }

}