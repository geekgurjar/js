#include<bits/stdc++.h>
using namespace std;
int main (){
  int arr[]={1,3,42,6,5,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"enter the no to search";
  int search;
  cin>>search;
  bool flag=false;
  for(int i=0;i<n;i++){
    if(arr[i]==search){
      printf("found %d at %d\n",search,i);
      flag=true;
    }
  }
  if(flag==false){
    cout<<"not found";
  }
  return 0;
}