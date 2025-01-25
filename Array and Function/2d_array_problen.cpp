#include<iostream>
using namespace std;
int maximumOnesRow( int row, int column, int array){
    int maxone=0;
    int maxrow=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(array[i][j]==1){
            int numberofones=column-j;
            if(numberofones>maxone){
                maxone=numberofones;
                maxrow=i;
            }break;
            }
        }
    }
    return maxrow;


}
int main(){
    int row,column;
    cout<<"enter the no. of rows : ";
    cin>>row;
    cout<<"enter the no. of columns : ";
    cin>>column;
    int array[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>array[i][j];
        }cout<<endl;
    }
    maximumOnesRow( row,column,array[row][column]);
}