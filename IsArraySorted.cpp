#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[],int curr,int n){
		if(curr==n){
			return true;
		}

		if(arr[curr]>arr[curr+1]){return false;}

	bool subprb=isArraySorted(arr,curr+1,n);
	return subprb;
 
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int n[]={1,2,3,4,6,5};
if(isArraySorted(n,0,sizeof(n)/sizeof(int))){
	cout<<"array sorted";

}
else cout<<"not sorted";



return 0;
}