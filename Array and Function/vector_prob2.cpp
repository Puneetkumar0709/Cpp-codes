#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<"entre the element x :";
    int x;
    cin>>x;
    int greater =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            greater++;
        }
    }
    cout<<greater<<endl;
    return 0;
}