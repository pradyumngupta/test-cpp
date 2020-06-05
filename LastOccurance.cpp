#include<bits/stdc++.h>
using namespace std;


int lastOccurance(long arr[],int curr,int n, long key){
    if(curr==n+1)
    {return -1;}
    
    int subp=lastOccurance(arr,curr+1,n,key);
    if(arr[curr]==key){
        return subp;
    }
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////
long arr[]={100,12,13,43,36,56,34,13};

int n=sizeof(arr)/sizeof(long);


cout<<lastOccurance(arr,0,n-1,13);



return 0;
}