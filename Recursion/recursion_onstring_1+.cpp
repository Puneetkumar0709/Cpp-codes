// Q). remove all the occurenece of 'a' from string

#include<iostream>
using namespace std;

string  f(string &s,int idx,int n)
//function f(s,idx,n)) returns the string w/o 'a' in the strin starting from index idx
{
    //base case 
    if(idx==n)  return "";
    //else condition
    string curr="";
    curr= curr+s[idx];
    return (((s[idx]=='a')?"":curr)+f(s,idx+1,n));
    //((s[idx]=='a')?" ":curr) represent the if else condition in onle line 
    //assumption = function f(s,idx+1,n)) returns the string w/o 'a' in the strin starting from index idx+1
    //self work = (((s[idx]=='a')?" ":curr)+f(s,idx+1,n));
}

int main(){
     string name= "varsha";
     int n = 6;
     string updated=f(name,0,6);

     cout<<"updated string w/o a= "<<updated;

     return 0;
     }