#include<bits/stdc++.h>
using namespace std;


void sieve(vector<int> &arr){
	int n=arr.size();

	for(int i=3;i<n;i+=2){
		arr[i]=1;
	}
	for(int i=3;i<=n;i++){
		if(arr[i]){
			for(int j=i*i;j<=n;j+i){
				arr[j]=0;
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////




return 0;
}