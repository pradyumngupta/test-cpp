#include<bits/stdc++.h>
using namespace std;


bool  isValid(int arr[], int n, int cows, int limit){

	int previouspos=arr[0];
	int cowsplacedtillthispoint=1;

	for(int i=1;i<n;i++){
		int currentCowPosition=arr[i];

		int gap=currentCowPosition- previouspos;
		if(gap>=limit){
			cowsplacedtillthispoint++;
			previouspos=arr[i];

			if(cowsplacedtillthispoint==cows){
				return true;
			}
		}
	}
	return false;
}

int agressiveCows(int arr[], int n;int cows){
	sort(arr,arr+n);

	int minDist=1;
	int maxDist=arr[n-1]-arr[0];

	int start= minDist;
	int end=maxDist;

	int ans=1;

	while(start<=end){
		int mid=(start+end)/2;
		if(isValid(arr,n,cows,mid)){
				ans=mid;
				start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return ans;
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int barn[]={2,1,4,9,8};
int n=5;
int cows=3;

cout<<agressiveCows(barn,n,cows);


return 0;
}