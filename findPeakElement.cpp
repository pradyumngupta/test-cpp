#include<bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[],int low,int high){
	int mid=(low+high)/2;
	if(low==high){return 0;}
	if(low>high){return -1;}

	if(arr[mid]>arr[mid-1]and arr[mid]>arr[mid+1]){
		return mid;
	}
	if(arr[mid]<arr[mid+1]and arr[mid]>arr[mid-1]){
		return findPeakElement(arr,mid+1,high);
		
	}
	if(arr[mid]>arr[mid+1]and arr[mid]<arr[mid-1]){
		return findPeakElement(arr,low,mid-1);
	
	}
	

}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

int arr[]={1,2};
int n=sizeof(arr)/sizeof(int);
cout<<findPeakElement(arr,0,n-1);


return 0;
}