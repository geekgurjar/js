#include<bits/stdc++.h>
using namespace std;
int main(){
  int m=6;
  int arr[]={0,1,3,-2,-4,2,-1,-9,-100,-3,5,1,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  bool temp[m+1];
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
      temp[arr[i]]=true;
    }
  }
  for(int i=0;i<m+1;i++){
    if(temp[i]==false){
      cout<<"missing no is :"<<i;
      return 0;
    }
  }
  return 0;

}

