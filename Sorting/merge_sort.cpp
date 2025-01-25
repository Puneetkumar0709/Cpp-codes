#include<iostream>
using namespace std;
void merge(int *array, int l,int mid,int r ){
    int an=mid-l+1;        /*here we have 2 subarray whichc are in sorted an and bn are the respective size od array a&b*/
    int bn=r-mid;
    int a[an] ; // create 2 temp array
    int  b[bn];
    for(int i=0;i<an;i++){
        a[i]=array[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=array[mid+1+j];
    }

    // merging these 2 array in sorted form
    int i=0; //initial indexof 1st sub array ,a
    int j=0;  //initial index of 2nd sub array ,b
    int k=l;  //initial index of merged array
    while(i<an && j<bn){              //in case if i or j comed to the end this loop will terminate 
        if(a[i]<b[j]){                      
        array[k++]=a[i++];
        }
        else{
        array[k++]=b[j++];
        }
    }

    while(i<an){         //iske pass i ki vo value aaye gi jaha last loop m i end hua the 
        array[k++]=a[i++];
    }

    while(j<bn){
        array[k++]=b[j++];
    }

}


void mergeSort(int *array, int l , int r){
    //base case 
    if(l>=r) return;
    int mid= (l+r)/2;

    mergeSort(array,l,mid);
    mergeSort(array,mid+1,r);
    merge(array,l,mid,r);

}


int main(){
    int array[]= { 10,28,24,6,34,18,38,44};
    int n =sizeof(array)/sizeof(array[0]);
     
     mergeSort(array,0,n-1);

     for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
     }

}