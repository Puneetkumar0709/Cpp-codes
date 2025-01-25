#include<iostream>
#include<vector>
using namespace std;
string sorting(string s){
    vector<int> freq(26,0);   // i.e size of freaq is 26 and every elemnt initialze with 0

    //storing frequency of every character of string
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';      // convert the asccii value to range b/t 0-25
        freq[index]++;
    }
    //create sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s[j++]=i+'a';
        }
    }

    return s;

}
int main(){
    string name="star";
    cout<<sorting(name);
}