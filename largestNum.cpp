#include<bits/stdc++.h>
using namespace std;

int countdigit(long num){
	int n=0;
	while(num>0){
		num/=10;
		n++;
	}
	return n;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

int t;
cin>>t;
while(t>0){
	int n;
	cin>>n;
	long arr[n];
	long arr2[n];
	for (int i = 0; i < n; i++)
	{cin>>arr[i];
		arr2[i]=arr[i]*pow(10,(5-countdigit(arr[i])));

		/* code */
	}
	for(int i=0;i<n;i++){for(int j=i;j<n;j++){if(arr2[j]>arr2[i]){swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0;i<n;i++){cout<<arr[i];
	}
}


return 0;
}