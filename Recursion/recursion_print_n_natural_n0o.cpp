#include<iostream>
using namespace std;
void naturalNum(int n){
    if(n<1){
        return ;
    }
     naturalNum(n-1);
    cout<< n<<" ";

}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    naturalNum(n);

    return 0;
}