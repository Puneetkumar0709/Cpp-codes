#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=2.34;
    /*create a pointer to store the addres of x 
    as it is of type integer so we need to create a integer type pointer*/

    int *ptr=&x;
    cout<<*ptr<<endl;

    /*create a pointer to store the addres of y
     as it is of type float so we need to create a float type pointer*/

    float *ptr2=&y;
    cout<<*ptr2<<endl;


    return 0;
    
}