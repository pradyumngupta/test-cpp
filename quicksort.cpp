#include<bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int start, int end){
	if(start>=end){
		return;
	}

	int mid=(start+end)/2;
	int left=start;
	int right=end;

	int pivot=arr[mid];
	while(left<=right){
		while(arr[left]<pivot){
			left++;
		}
		while (arr[right]>pivot){
			right--;
		}

		if(left<=right){
			swap(arr[left],arr[right]);
			left++;
			right--;


		}
	}
	quicksort(arr,start,right);
	quicksort(arr,left,end);
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

int arr[]={1,4,6,2,3,9,5,10};
int n=sizeof(arr)/sizeof(int);
quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
{cout<<arr[i]<<" ";}


return 0;
}