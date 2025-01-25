#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the number of rows : ";
    cin>>row;
    cout<<"enter the number of column : ";
    cin>>column;
    int matrix[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }cout<<endl;
    }
    int transpose[column][row];
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            transpose[i][j]=matrix[j][i];
        }cout<<endl;
    }
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j];
        }cout<<endl;
    }

    
    
    
}