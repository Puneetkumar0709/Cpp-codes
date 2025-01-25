#include<iostream>
#include<vector>
using namespace std ;
void spiralMatrix ( vector<vector<int>> &v){
    int left=0;
    int right=v[0].size()-1;
    int top=0; 
    int bottom=v.size()-1;

    int direction=0;
    while(left<=right&& top<=bottom){
        //left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        //top to bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        else if(direction==2){
            //right to left
            for(int col=right;col>=left;col--){
                cout<<v[bottom][col]<< " ";
            }
            bottom--;
        }
        //bottom to up
        else{
            for(int row=bottom;row>=top;row-- ){
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;   //because direction ke pass sirf 3 values hogi 0 1 2 3
    }
}
int main(){
    int row,column;
    cout<<"enter the number of row : ";
    cin>>row;
    cout<<"enter the number of column : ";
    cin>>column;


    vector<vector<int>> v(row,vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>v[i][j];
        }
    }
    spiralMatrix( v);
}
