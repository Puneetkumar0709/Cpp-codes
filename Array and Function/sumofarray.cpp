#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
     cout<<"size of array ="<<n<<endl;
    
    int array[n];
    int index=0;
    while(index<n){
        cin>>array[index];
        index++;
    }
     while(index<n){
        cout<<array[index]<<" ";
        index++;
    } 
    int sum=0;
    int i=0;
    
        while(i<index){
        sum+=array[index];
        i++;
        
    }
    cout<<sum<<endl;
    return 0;
}