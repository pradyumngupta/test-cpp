#include<bits/stdc++.h>
using namespace std;

string movetoEnd(string str){
	if(str.length()==0){
		return str;
	}

	char ch=str[0];
	string ros=str.substr(1);
	string result=movetoEnd(ros);

	if(ch=='x'){
		return result+ch;
	}
	else return ch+result;
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

string s="xaxbxc";

cout<<movetoEnd(s);



return 0;
}