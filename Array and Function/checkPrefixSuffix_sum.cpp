#include<iostream>
using namespace std;
bool  checkSuffixPrefixsum( int n ,int array[]){
    int total=0;
    for(int i=0;i<n;i++){
        total+=array[i];

    }
    int prefix =0;
    for(int i=0;i<n;i++){
        prefix+=array[i];
    

        int suffix= total-prefix;
        
         
         if(prefix==suffix){
            return true;
         }
    }
    return false;
}
int main(){
    int n;
    cout<<"entre the size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    checkSuffixPrefixsum( n, array);
     return 0;
}