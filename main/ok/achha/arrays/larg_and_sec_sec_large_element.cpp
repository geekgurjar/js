#include<bits/stdc++.h>
using namespace std;
int sec__largest(int arr[],int n , int sec_larg);

int main(){
int arr[]={5,3,7,9,2,12,65,23,0,99,23,13};
int n=sizeof(arr)/sizeof(arr[0]);
int sec_larg=INT_MIN;

sec__largest(arr,n,sec_larg);


  return 0;
}


int sec__largest(int arr[], int n ,int  sec_larg){
  int largest=INT_MIN;
  for(int i=0;i<n;i++){

    if(arr[i]>largest){
      sec_larg=largest;
      largest=arr[i];

    }
   
    else if(arr[i]>sec_larg && arr[i]<largest){
      sec_larg=arr[i];
    }
  }
  printf("largest no =%d\n",largest);
  printf("second largest no =%d",sec_larg);
  return 0;
}