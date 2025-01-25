#include<iostream>
using namespace std;
int cost(int*h,int i,int n) //h=array of height  i=idx  n=length of array
{
    //base class
    if(i==n-1) return 0;
    if(i==n-2) return (cost(h,i+1,n)+abs(h[i]-h[i+1]));

    return min(cost(h,i+1,n)+abs(h[i]-h[i+1]),cost(h,i+2,n)+abs(h[i]-h[i+2]));

} 
int main(){
    int n;
    cout<<"enter the total no. of stones : ";
    cin>>n;
    int stone_height[n];
    for(int i=0;i<n;i++){
        cin>>stone_height[i];
    }

    cout<<"final minimum cost "<<cost(stone_height,0,n);
    
}