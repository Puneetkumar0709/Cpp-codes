#include<iostream>
using namespace std;
bool target(int*array,int n,int i, int x)
//traget represent that the taeget is present in range of{i to n-1}
{         //n=size  i=idex   x=target value

if(i==n) return false;    //array exhausted

return ((array[i]==x)||target(array,n,i+1,x));


}
int main(){
    int size,find;
    cout<<"enter the size of array : ";
    cin>>size;
    cout<<"enter the target value : ";
    cin>>find;

    int arr[size];
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }

     int result=target(arr,size,0,find);
       if (result)cout<<"yes";
       else cout<<"no";
}
