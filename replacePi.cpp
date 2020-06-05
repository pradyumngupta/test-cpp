#include<bits/stdc++.h>
using namespace std;

string replacePi(string str,int curr){
	if(str.length()==0){
		return str;
	}
	string ros=replacePi(str,curr+1);
	if(str[curr]=='p' and str[curr+1]=='i'){
		return str.substr(0,curr)+"3.14"+str.substr(curr+2);
	}
	else return str;
	
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int t;
cin>>t;

for(int i=0;i<t;i++){
	string str;
	cin>>str;
	cout<<replacePi(str,0)<<endl;
}



return 0;
}