#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}

	int subp=n*fact(n-1);
	return subp;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

cout<<fact(4);


return 0;
}