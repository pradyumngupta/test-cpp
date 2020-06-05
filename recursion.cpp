#include<bits/stdc++.h>
using namespace std;


int countmazepath(int sr, int sc, int er, int ec){
	if(sr==er and sc==ec){
		return 1;
	}
	else if(sr>er or sc>ec){
		return 0;
	}

	int right=countmazepath(sr,sc+1,er,ec);
	int down=countmazepath(sr+1,sc,er,ec);
	int total=right+down;
	return total;
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int arr[4][4];

int count=countmazepath(0,0,3,3);
cout<<count;



return 0;
}