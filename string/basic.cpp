#include<iostream>
#include<string>

using namespace std;
int main(){
    /*string str,str2;
    
    getline(cin,str2);    // use to write words by providing space or use for writting a sentence
    cout<<" output is "<<str2;;*/
    char ch='W';

    cout<<int(ch)<<endl;       //coverting char into ascii value;

    string s= "monu";
   // reverse(s[0],s[3]);
    cout<<s.substr(0,2)<<endl;      // function to print sub strinh uses 2 argu. 1st is start position and 2nd length upto 
    cout<<s;
}
