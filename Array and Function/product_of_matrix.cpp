#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    cout<<"no. of rows in matrix 1 :"<<r1<<endl;
    cout<<"no. of column in matrix 1 :"<<c1<<endl;
    cout<<"no. of rows in matrix 2 :"<<r2<<endl;
    cout<<"no. of column in matrix 2 :"<<c2<<endl;
     cout<<"entre the elements of 1st matrix"<<endl;
     int ar1[r1][c1];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>ar1[i][j];
        }
     }cout<<endl;
    
    cout<<"entre the elements of 2nd matrix"<<endl;
     int ar2[r2][c2];
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>ar2[i][j];
        }
     }cout<<endl;

     if(c1!=r2){
        cout<<"product not possible";
     }

      
     else{
        int ar3[r1][c2];
        ar3[r1][c2]=0;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    ar3[i][j]+=(ar1[i][k]*ar2[k][i]);
                }
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<ar3[i][j]<<" ";
            }
            cout<<endl;

     }
        
     }
     
     
}

