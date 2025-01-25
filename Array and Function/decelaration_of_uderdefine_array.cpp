#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    cout<<"size of array ="<<n<<endl;
    cout<<"enter elements of array";
    
    int array[n];
    int index=0;
    while(index<n){
        cin>>array[index];
        index++;
    }
    index=0;
    cout<<"\n your array is :\n ";
    while(index<n){
        cout<<array[index]<<" ";
        index++;
    }
   

    return 0;
}