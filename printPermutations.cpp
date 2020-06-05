#include<bits/stdc++.h>
using namespace std;


string code[]={"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void printKeypad(string str, string ans) {

	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch=str[0];
	string ros=str.substr(1);

	int idx=ch-'0';
	string key=code[idx];
	for(int i=0;i<key.length();i++){
		printKeypad(ros,ans+key[i]);
	}

	

}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
printKeypad("7363", "");


return 0;
}