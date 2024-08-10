#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,4,5,6,3,7,8,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  bool flag=true;

  for(int i=0;i<n-1;i++){
    if (arr[i]>arr[i+1]){
      flag=false;
    }
  }
  if(flag==true){
    cout<< "sorted";
  }
  else{
    cout<<"un-sorted";
  }
  return 0;
}