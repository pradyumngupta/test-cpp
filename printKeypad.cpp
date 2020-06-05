#include<bits/stdc++.h>
using namespace std;

stringstream ss;

void printBoardPath(int start, int end,string ans){
	if(start==end){
		cout<<ans<<endl;
		return;
	}
	if(start>end){
		return;
	}

	for(int jump=1;jump<=6;jump++){
		ss<<jump;
		string temp=ss.str();
		printBoardPath(start+jump,end,ans+temp);
	}
}
	

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

printBoardPath(0,3,"");


return 0;
}