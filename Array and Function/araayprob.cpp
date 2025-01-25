#include<iostream>
using namespace std;
int main(){
    int array[]={1,4,5,2,7};
    int max=array[0];
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;

}