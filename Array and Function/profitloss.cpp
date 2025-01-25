#include<iostream>
using namespace std;
int main()
{
    int cp,sp,p,l;
    cout<<"cost price = ";
    cin>>cp;
    cout<<"selling price = ";
    cin>>sp;
    p=sp-cp;
    l=cp-sp;
    
    if(sp>cp)
    {
        cout<<"profit = "<<p<<endl;
    }
    else if (cp>sp)
    {
        cout<<"loss = "<<l<<endl;
    }
    else
    cout<<"no profit no loss";
    return 0;
}