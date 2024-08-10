#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int arr[]={1,2,3,4,5,6,7,};
  int n=sizeof(arr)/sizeof(arr[0]);
  int d;
  cout<<"enter value of d  ";
  cin>>d;
  int temp[d];

  for(int i=0;i<d;i++){
    temp[i]=arr[i];
  }
int j=0;
  for(int i=3;i<n;i++){
    
    arr[j]=arr[i];
    j++;
  }

  int m=n-d;
  int l=0;
  while(m<n){
    
    arr[m++]=temp[l++];
  }

  for(int k=0;k<n;k++){
    cout<<arr[k]<<"\t";
  }
 return 0;
}