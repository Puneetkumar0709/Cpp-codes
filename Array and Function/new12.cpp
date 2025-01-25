#include<iostream>
using namespace std;
int main(){
    //num of row is nand num of colummn is m
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        cout<<j;
        }
        cout<<endl;
    }
    return 0;
}