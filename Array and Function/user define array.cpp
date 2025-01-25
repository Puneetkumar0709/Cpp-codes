#include<iostream>
using namespace std;
int main()

{
    int n;
   cin>>n;
    cout<<"size of araay ="<<n;

    int array[n];
    for (int idx=0;idx<n;idx++){
        cin>>array[idx];
    }
     for (int idx=0;idx<n;idx++){
        cout<<array[idx]<<"  ";
    }
    
     return 0;
}