#include<iostream>
using namespace std;

int path(int i,int j,int m,int n){
    if (i==m-1 && j==n-1) return 1;  //we reach at the last idex

    if(i>=m ||j>=n) return 0;      // if we over cross the row or column 

    return path(i,j+1,m,n)+path(i+1,j,m,n);
    
}
int main(){
    int row=3,column=3;
    cout<<"no. of rows : "<<row<<endl<<"no.of column : "<<column<<endl;

    int total_path= path(0,0,3,3);

    cout<<"toal number of path to reach at the end of m*n grid is "<<total_path;

    return 0;
}