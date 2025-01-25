#include<iostream>
using namespace std;
void prefix(int n, int ar[]){
    int i=1;
    while(i<n)
    {
        ar[i]=ar[i]+ar[i-1];
        i++;
    }
   
}
int main()
    {
        int n;
        cout<<"entre the size of array : ";
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        prefix( n, array);
        
        for(int i=0;i<n;i++){
            cout<<array[i]<<" ";
        }
        return 0;
    }
