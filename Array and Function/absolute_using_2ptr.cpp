#include<iostream>
#include<vector>
using namespace std;
void sortedSquare(vector<int> v){
    vector<int>ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
     cout<<endl;


    
}
   
int main(){
    int n;
    cin>>n;
    cout<<"size of array : "<<n<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortedSquare(v);
    return 0;
}