#include<bits/stdc++.h>
using namespace std;

void printPermurtations(string str, string ans){
	
	for(int i=0;i<str.length();i++){
	char ch=str[i];
	string ros=str.substr(0,i)+str.substr(i+1);

	
	printPermurtations(ros,ans+ch); 
	}
	if(str.length()==0){
	cout<<ans<<endl;
	return;	
	}
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

string s="abcd";

printPermurtations(s,"");



return 0;
}