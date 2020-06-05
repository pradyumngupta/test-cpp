#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int start, int end){
	int mid=(start+end)/2;
	int i=start;
	int j=mid+1;
	int k=0;
	int temp[end+1];
	while(i<=mid and j<=end){

	if(arr[i]>arr[j]){
		temp[k]=arr[j];
		k++;
		j++;
	}
	else{
		temp[k]=arr[i];
		k++;
		i++;
	}

	while(i<=mid){
		temp[k]=arr[i];
		k++;i++;
	}

	while (j<=end){
		temp[k]=arr[j];
		k++;j++;
	}

	int pos=0;
	for(int x=start;x<=end;x++){
		arr[x]=temp[pos];
		pos++;
	}


}


}

void mergeSort(int arr[], int start, int end){
	if(start==end){
		return;
	}

	int mid=(start+end)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);

	merge(arr,start,end);


}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int arr[]={4,3,8,2,5,7,1,9};
int n=sizeof(arr)/sizeof(int);
mergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}



return 0;}