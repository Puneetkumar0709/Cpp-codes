/*#include<iostream>
using namespace std;
//using ecluid subtraction algo;
int hcf(int a,int b){
    if(b>a) return(b,a);
    //base case
    if(b==a) return a;

    return hcf(b,a-b);
}

int main(){
   
   cout<< hcf(4,9);
   

return 0;
}*/

#include<iostream>
using namespace std;
//using ecluid division algo;
int hcf(int a,int b){
    if(b>a) return(b,a);
    //base case
    if(b==0) return a;

    return hcf(b,a%b);
}

int main(){
   
   cout<< hcf(4,9);
   

return 0;
}