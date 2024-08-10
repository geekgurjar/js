#include<bits/stdc++.h>
using namespace std;
int  main(){
  int arr[]={1,0,2,0,2,1,33,3,4,0,0,0,5,6,0};
  int n=sizeof(arr)/sizeof(arr[0]);
int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      arr[j++]=arr[i];
    }
  }
  while(j<n){
    arr[j++]=0;
  }
  for( int i = 0; i < n; i++)
  {
    cout<<arr[i]<<"\t";
  }
  return 0;
}