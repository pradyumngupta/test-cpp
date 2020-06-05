#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low, int high,int key){
     int mid=(low+high)/2;
     if(low>high){
     	return -1;
     }
     else if(arr[mid]==key){
     	return mid;
     }
//recursive case
     else if(arr[mid]<key){
     	int subp=binarySearch(arr,mid+1,high,key);
     	return subp;
     }
     else if(arr[mid]>key){
     	int subp=binarySearch(arr,low,mid-1,key);
     	return subp;
     }
    return -1;  
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

int arr[]={1,2,5,6,8,23,27,35};
int n=sizeof(arr)/sizeof(int);
cout<<binarySearch(arr,0,n-1,23);


return 0;
}