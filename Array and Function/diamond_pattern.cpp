#include<iostream>          //using type inter conversion
using namespace std;
int main(){

    int n;
    cin>>n;
    //row=i
    //for upper triangle
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
       
        int num_of_character = 2*i-1;         //num of character in one line 
        for(int alphabhet=0;alphabhet<num_of_character;alphabhet++){
            char ch=(char)('A'+alphabhet);
            cout<<ch;
        }cout<<endl;

    }
    //for lower triangle
    for(int i=n+1;i<=2*n-1;i++){
        for(int space=1; space<=i-n;space++){
            cout<<" ";
        }
        int num_chracter=2*(2*n-i)-1;

        for(int k=0;k<num_chracter;k++){
             char ch=(char)('A'+k);
            cout<<ch;

        }cout<<"\n";
    }
    return 0;
}