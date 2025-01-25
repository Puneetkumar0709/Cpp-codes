#include<iostream>
#include<vector>
using namespace std;
/* recursive function = this function give the subsequence of any string from index i to size of string
 which will get store in result string
then the result string get stored in list vector   */
void subsequence(string &enter, int i, string result, vector<string> &list){
    if(i==enter.length()){
        list.push_back(result);
        return;
    }
    subsequence(enter,i+1,result+enter[i],list) ;  //whwn the ith element is picked;

    subsequence(enter,i+1,result,list);          //when ith eelement is not picked


}

int main(){
    string abc;
    cout<<"enter the string : ";
    cin>>abc;

    vector<string> final;

    

     subsequence(abc ,0," ",final);

     for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
     }

}