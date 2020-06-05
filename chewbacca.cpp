#include<bits/stdc++.h>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
long long int num,chew=0;
cin>>num;
long long int t, pos=1;
if(num>0){while(num>0){
	t=num%10;
	
	if(t>=5&&t<=9&&num!=9){
		t=9-t;}
		chew+=t*pos;
	
		pos*=10;
		num/=10;
		
	
}

cout<<chew;}
else cout<<num;



return 0;
}