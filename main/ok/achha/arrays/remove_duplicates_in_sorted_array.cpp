#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,1,1,1,2,2,3,4,4,5,6,7,8,8,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int j=1;  
  int current=arr[0];

  for(int i=0;i<n;i++){
    if(arr[i]!=current){
      arr[j++]=arr[i];
      current=arr[i];
    }

  }
  while(j<n){
    arr[j++]=0;

  }
  for(int k=0;k<n;k++){
    cout<<arr[k]<<"\t";

  }
  return 0;
}