#include<bits/stdc++.h>
using namespace std;


bool canGive(long n, long m, long x, long y, long a){
	
	return (x*a<=m+y*(n-1));

}
long winningCB(long n, long m, long x, long y){

	long start=0;
	long end=n;

	long ans=0;
	while(start<=end){
		long mid=(start+end)/2;
		if(canGive(n,m,x,y,mid)){
			ans=mid;
			start =mid+1;}
			else{
					end=mid-1;
			}
		}
	}



int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////


long n=5;
long m=10;
long x=2;
long y=1;

cout<<winningCB(n,m,x,y)<<endl;

return 0;
}