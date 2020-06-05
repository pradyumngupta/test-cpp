#include<bits/stdc++.h>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int n,m;
cin>>m>>n;
int arr[m][n];
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
	}
}
//printing part
int n,m;
cin>>m>>n;
int arr[m][n];
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
	}
}
for(int j=n-1;j>=0;j--){
	for(int i=0;i<m;i++){
		cout<<arr[i][j]<<" ";
	}cout<<endl;
}


	return 0;
}