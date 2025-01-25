#include<iostream>
using namespace std;
//*x and *y are the drees passed
void swap(int *x,int *y){
    int temp=*x;    //dereferencing value 
    *x=*y;
    *y=temp;

    
}
int main(){
    int x,y;
     cout<<"enter 2 numbers : "<<endl;
     cin>>x>>y;

     int *pt1=&x;  //pointer store adrees of x
     int *pt2=&y;   //pointer store adrees of y

     swap(pt1,pt2);    //passing adress of x and y to the function
     cout<<x <<" "<<y;
     return 0;
}