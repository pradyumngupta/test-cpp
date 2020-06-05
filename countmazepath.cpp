#include<bits/stdc++.h>
using namespace std;

string addstar(string str){
	if(str.length()==0){
		return str;
	}
	char ch=str[0];
	string ros=str.substr(1);
	string result=addstar(ros);
	

	if(ch==result[0]){
		return ch+(string)"*"+result;
	}
	else
		return ch+result;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

string s="abbcdde";

cout<<addstar(s);



return 0;
}