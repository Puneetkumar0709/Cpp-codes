#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string s1= "monu";
    string s2=" panchal";
    /*s1=s1+s2;  copy os s1 is created
    s1+=s2;   s2 getting appended after s1
    both have different meaning */
    cout<<s1+s2<<endl;;   //+op use to concatinate 2 string

    /*strcat() is use to cancatenate the char array */
    char ch='a';
    s1.push_back(ch);
    cout<<s1<<endl;
    cout<<s1.size()<<endl;   //to find the size of str

    char arr[11]="abcdefgh";
    cout<<strlen(arr)<<endl;;  //use to find the size of char array

    //to_string() function is use to convert numeric value to string

    
}
