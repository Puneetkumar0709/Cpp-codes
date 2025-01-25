
//garbage program

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of stack : ";
    cin>>size;
    int element;
    int top;
    int stack[size];
    
    for(int i=0;i<size-1;i++){
        cin>>stack[i];
    }
     

    if(top==size-1){
        cout<<"stack is full : "<<endl;
    }
    else{
        cout<<"enter the element : ";
        cin>>element;
        top=top-1;
        stack[top]=element;
    }
    
    for(int i=0;i<size;i++){
        cout<<stack[i];
    }

   
   return 0;
 
 }