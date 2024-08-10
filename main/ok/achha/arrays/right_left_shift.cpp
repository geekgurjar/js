#include<bits/stdc++.h>
using namespace std;
int rightshift(int arr[], int n);
int leftshift(int arr[], int n);
int main(){
  int arr[]={1,2,3,4,5,6};
  int n =sizeof(arr)/sizeof(arr[0]);
  leftshift(arr,n);
  cout<<"\n";
  rightshift(arr,n);
  return 0;
}
int leftshift(int arr[],int n){
  int temp=arr[0];
  int i=0;
  while(i<n){
    arr[i]=arr[i+1];
    i++;
  }
  arr[n-1]=temp;
  for(int k=0;k<n;k++){
    cout<<arr[k]<<"\t";
  }
  return 0;
}
int rightshift(int arr[], int n ){
  int temp=arr[n-1];
  int i=n-2;
  while(i>=0){
    arr[i+1]=arr[i];
    i--;
  }
  arr[0]=temp;
  for(int k=0;k<n;k++){
    cout<<arr[k]<<"\t";
  }
  return 0;
}