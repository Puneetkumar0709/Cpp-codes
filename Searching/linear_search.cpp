#include<iostream>
using namespace std;
int main(){
    int array[]={8,5,4,6,2,4};
    int n=sizeof(array)/sizeof(array[0]);
    bool flag=false;
    int find;
    cout<<"Enter the element which u want to find : ";
    cin>>find;

    for(int i=0;i<n;i++){
        if(array[i]==find){
            
            cout<<"element is at "<<i<<"th position"<<endl;
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"element is found";

    }
    else
    cout<<"element not found";
}