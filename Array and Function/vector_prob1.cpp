#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    int x;
    cout<<"entre the element=";
    cin>>x;

    int present=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            cout<<i;
        }
    }
    return 0;
}