#include<bits/stdc++.h>
using namespace std;

int lastIndex(int arr[],int si, int n,int key){
	if(si==n){return -1;}

	int index=lastIndex(arr,si+1,n,key);
	if(index!=-1){
		return index;
	}
	else{
		if(arr[si]==key){
			return si;
		}
		else {
			return -1;

		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int arr[]={3,2,3,4,5,3,6};
int n=sizeof(arr)/sizeof(int);
int key=8;

cout<<lastIndex(arr,0,n,key);



return 0;
}