#include<iostream>
using namespace std;
int percent(int num1,int num2,int num3){
   int percent= (num1*100)/(num2*num3);
   return percent;
}
int main(){
    int n;
    cin>>n;
    cout<<"no. of subjects : "<<n<<endl;
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<"total marks obtain : "<<sum<<endl;
    int max;
    cin>>max;
    cout<<"maximum marks obtain in a subject : "<<max<<endl;
    
    cout<<percent(sum,n,max);

    

    return 0;
}