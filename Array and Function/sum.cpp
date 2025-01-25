#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
     cout<<"size of array ="<<n<<endl;
    
    int array[n];
    int index=0;
    for(int index=0;index<n;index++){
        cin>>array[index];
        
    }
     for(int index=0;index<n;index++){
        cout<<array[index]<<" ";
        
    } 
    cout<<endl;
    int sum=0;
    int i=0;
    
        
        for(int i=0 ;i<index;i++){
        sum+=array[index];
        
    }
    cout<<sum<<endl;
    return 0;
}