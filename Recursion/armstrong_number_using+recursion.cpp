#include<iostream>
using namespace std;
int power(int a, int b){            //recursive function for power
   //base class
    if (b==0) return 1;

    return a*power(a,b-1);
}
//function for arstrong no.
int armstrong(int n,int d)
//n is given number and d is the no. of digits
{
    if(n==0) return 0;

    return (power(n%10,d)+armstrong(n/10,d));
}

int main(){
    
    int num ;
    cout<<"enter the number : ";
    cin>>num;
    int digit=0;

   int i=num; //loop for calculating no. of digit in a number
    while(i>0){
        i=i/10;
        digit++;
    }
    int answer=armstrong(num,digit);

    if(answer==num){
        cout<<answer<<" is an armstrong number ";
    }
    else{
        cout<<" Not an armstrong number ";
    }

    return 0;
    
    
    
}

