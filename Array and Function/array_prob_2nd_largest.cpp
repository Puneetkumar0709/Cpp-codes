#include<iostream>
using namespace std;
//asumming that array contain unique element
int largest(int ar[],int size)
{
  int max=INT8_MIN;
  int maxindex=-1;
  for(int i=0;i<size;i++){
    if(ar[i]>max){
        max=ar[i];
        maxindex=i;
    }
  }
  return maxindex;
}
int main(){
    int n;
    cin>>n;
    cout<<"size of array : "<<n<<endl;

    int array[n];
    for(int i=0;i<n;i++){
    cin>>array[i];
    }

    int indexoflargestelement=largest(array,n);
    cout<<"1st largest :"<<array[indexoflargestelement]<<endl;
    array[indexoflargestelement]=-1;

    int indexofsecondlargest=largest(array,n);
    cout<<"2nd larges :"<<array[indexofsecondlargest]<<endl;
    return 0;
}