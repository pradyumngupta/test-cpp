#include<bits/stdc++.h>
using namespace std;

int FirstOccurance(int arr[],int low, int high, int key){
	int mid=(low+high)/2;
	if(low>high){
		return -1;
	}
	else if(arr[mid]==key){
		if(arr[mid+1]>key){
			return mid;
		}
		else {int subp=FirstOccurance(arr,mid+1,high,key);
			return subp;}
	}
	else if(arr[mid]>key){
			int subp=FirstOccurance(arr,low,mid-1,key);
			return subp;
	}
	else if(arr[mid]<key){
			int subp=FirstOccurance(arr,mid+1,high,key);
			return subp;
	}

}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int arr[]={11,11,12,12,12,12,13,13,14,14,14};
int n=sizeof(arr)/sizeof(int);
int key=12;
cout<<FirstOccurance(arr,0,n-1,key);



return 0;
}