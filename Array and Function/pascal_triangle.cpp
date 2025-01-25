#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for which u have to print  pascal triangle : ";
    cin>>n;
    int triangle[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||i==j){
                triangle[i][j]=1;
            }
            else{
                triangle[i][j]=triangle[i-1][j]+triangle[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<triangle[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
    
    }
