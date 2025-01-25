#include<iostream>
using namespace std;
int main(){
    int array[]={1,4,5,2,9};
    //we want to search a element . If not present print -1
    int key=2;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(array[i]==key){
           ans=i;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}