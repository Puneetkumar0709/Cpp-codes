#include<iostream>
using namespace std;
int main(){
    int p,q ;
    int array1[p], array2[q],array3[p+q];
     cout<<" enter the size of 1st array : ";
        cin>>p;
        cout<<"enter the element of 1st array in sorted form : "<<endl;
        for(int i=0;i<p;i++){
           cin>>array1[i];
        }
       
       cout<<"enter the size of 2nd array : ";
        cin>>q;
        cout<<"enter the elements of 2nd array in sorted form :"<<endl;
        for(int i=0;i<q;i++){
            cin>>array2[i];
        }
          int c=0,m=0,n=0;
           while (m < p && n < q) {
        if (array1[m] < array2[n]) {
            array3[c++] = array1[m++];
        } else {
            array3[c++] = array2[n++];
        }
    }
         while(m<p){                    //merging 1st array
            array3[c++]=array1[m++];
           
          }
          while(n<q){                  //merging 2nd array
            array3[c++]=array2[n++];
            
          }
          cout<<" merged array : "<<endl;
          for(int i=0;i<c;i++){
            cout<<array3[i]<<" ";
          }

          return 0;
      }

