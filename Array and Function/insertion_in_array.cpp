#include<iostream>
using namespace std;
void insertion(int array[],int,int,int);       //prototype
int main(){
    int array[15];
    int length,position,element;
    cout<<"enter the lenght of array : "<<endl;
    cin>>length;
    cout<<"enter the the elements of array : "<<endl;
    for(int i=0;i<length;i++){
        cin>>array[i];
    }
    cout<<"enter the position of insertion : ";
    cin>>position;
    cout<<"enter the element to be inserted : ";
    cin>>element;

    insertion( array,length,position,element);

}
void insertion(int array[],int length, int position, int element){
    for(int i=length;i>=position;i--){
        array[i+1]=array[i];
    }
    array[position]=element;
    for(int i=0;i<=length;i++){
        cout<<array[i]<<" ";
    }
}
