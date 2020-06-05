#include<bits/stdc++.h>
using namespace std;

void targetSumTriplet(int arr[],int n,int sum){
	int l,r,temp;sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
			l=i+1; r=n-1;
			temp=sum-arr[i];
			while(l<r){if(arr[l]+arr[r]>temp){
				r--;
			}
			else if(arr[l]+arr[r]<temp){
				l++;
			}
			else if(arr[l]+arr[r]==temp){
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
				l++;r--;
			}
		}

	}
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int sum;
cin>>sum;
targetSumTriplet(arr,n,sum);



return 0;
}