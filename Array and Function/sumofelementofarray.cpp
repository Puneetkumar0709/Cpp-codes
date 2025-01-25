#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    cout<<"size of array ="<<n<<endl;
    cout<<"enter elements of array"<<endl;
    
    int array[n];
    int index=0;
    while(index<n){
        cin>>array[index];
        index++;
    }
    index=0;
    cout<<"\n your array is : ";
    while(index<n){
        cout<<array[index]<<" ";
        index++;
    }
    int sum=0;
    index=0;
    for(int i=0;i<n;i++){
        sum+=array[index];
        index++;
        
    }
    cout<<"\n sum of array is "<<sum<<endl;

    return 0;
}