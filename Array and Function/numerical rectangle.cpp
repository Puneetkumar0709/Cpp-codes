#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=i;i<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(n-1);j++){
            cout<<j;
        }
    }
    return 0;
}