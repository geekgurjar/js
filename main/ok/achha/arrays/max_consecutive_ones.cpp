#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,1,3,4,1,1,1,1,3,1,4,1,1,3,1,1,1,1,1,1,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int count=0;
  int ans=1;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
      ans=max(ans,count);
    }
    else{
      count=0;
    }
  }
  cout<<ans;
  return 0;
}