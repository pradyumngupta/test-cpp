#include<bits/stdc++.h>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
int test;
cin>>test;
for(int i=0;i<test;i++){
	int a,b,count=0;
	cin>>a>>b;
	int primes[b+1];
	primes[0]=0;
	primes[1]=0;
	
	for (int j = 2; j <= b; j++){
            if((j&1)==0||j<a){
                primes[j]=0;
            }else{
                primes[j]=1;
            }
        }

        if(2>=a){
            primes[2]=1;
        }

	for(int j=3;j<=b;j+=2){
		int k=2;
		while(j*k<=b){
			primes[j*k]=0;
			k++;
		}
	}
	int p=0;
	for(int t=0;t<=b;t++){
		if(primes[t]){
			p++;
		}
	}
	cout<<p<<endl;
	}





return 0;
}