#include<iostream>
using namespace std;

// function to compute 1st and last occurence of "a"

void  compute(string s, char ch , int *pf,int *pl){
    for( int i=0;i<s.size();i++){
        if(s[i]== ch){
            *pf=i;
            break;
        }
    }
    for(int i=s.size()-1 ;i>0;i--){
        if(s[i]==ch){
            *pl=i;
            break;
        }
    }
}

int main(){
    string s="aaababac";
    char ch='a';
    int first=-1;
    int last=-1;

    int *pf=&first;
    int *pl=&last;

    compute(s,ch,pf,pl);

    cout<<first<<" "<<last<<endl;
    cout<<*pf<<" "<<*pl;

    return 0;

}