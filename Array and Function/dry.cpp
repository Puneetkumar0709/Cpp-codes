#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<" enter the row of 1st matrix : ";
    cin>>r1;
    cout<<"enter the column of 1st matrix : ";
    cin>>c1;

    int a1[r1][c1];
   for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>a1[i][j];
    }cout<<endl;
   }
   int r2,c2;
    cout<<" enter the row of 2nd matrix : ";
    cin>>r2;
    cout<<"enter the column of 2nd matrix : ";
    cin>>c2;

    int a2[r2][c2];
     for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
        cin>>a2[i][j];
    }cout<<endl;
   }
   if(c1==r2){
   
   int a3[r1][c2];
      ;
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        int value=0;
        for(int k=0;k<r2;k++){
            value+=(a1[i][k]*a2[k][i]);
            
        }
        a3[i][j]=value;
    }
   }
   for(int i=0;i<r1;i++){
     for(int j=0;j<c2;j++){
        cout<<a3[i][j]<<" ";
     }cout<<endl;
   }

   }

   
   return 0;
  }