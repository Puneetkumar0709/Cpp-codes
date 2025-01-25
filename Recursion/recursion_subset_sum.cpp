#include<iostream>
#include<vector>
using namespace std;
void subset_sum(int*array,int size, int idx, int sum,vector<int>&result)
//this function print the sum of all subset and store it in a result vector
{ 

    if (idx==size){                 //base case
        result.push_back(sum);           //additon in result vector
        return ;
    }
     
     subset_sum(array,size,idx+1,sum+array[idx],result);  // when the element of idx index is picked

     subset_sum(array,size,idx+1,sum,result);     //when the element of index is not picked
}

int main(){
    int size= 3;
    int array[size]={4,2,3};
    vector<int> result;
    subset_sum(array,size,0,0,result);

    for(int i=0;i<sizeof(result);i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
