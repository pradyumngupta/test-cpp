#include<bits/stdc++.h>
using namespace std;

int hulkprb(int n){
	int count=0;
	while(n>0){
		int val=n&1;
		if(val==1){
			count++;
		}

		n=n>>1;
	}
	return count;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

cout<<hulkprb(9);


return 0;
}