//Q). find the square root given non -ve value x.round it off nearest float integer value
// using binary search

#include<iostream>
using namespace std;
int square_root(int n ){
    int low=1;                 // here we dont have any array we fixed a rnage  from the given input
    int high=n;
    int ans=-1;  // new variable is created to store our ans value
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;    // here we assign value because it may be the answer
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<square_root(n);
}