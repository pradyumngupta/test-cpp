#include<bits/stdc++.h>
using namespace std;

bool ratInAMaze(char maze[4][4], int sr, int sc, int er, int ec,int sol[4][4]) {
		if(sr==er and sc==ec){
			sol[sr][sc]=1;
			for(int i=0;i<=er;i++){
				for(int j=0;j<=ec;j++){
					cout<<sol[i][j]<<" ";
				}cout<<endl;
			}
			return true;
		}
		else if(sr>er or sc>ec){
			return false;
		}
		else if(maze[sr][sc]=='X'){
			return false;
		}
		sol[sr][sc]=1;

		bool rightMove=ratInAMaze(maze,sr,sc+1,er,ec,sol);
		bool downMove=ratInAMaze(maze,sr+1,sc,er,ec,sol);
		if(rightMove or downMove){
			return true;
		}
		return false;
}

bool isRightSafe(char maze[4][4],int sr, int sc){
	if(maze[sr][sc]==0){
		return true;
	}
	return false;
}

bool isDownSafe(char maze[4][4],int sr, int sc){
	if(maze[sr][sc]==0){
		return true;
	}
	return false;
}


void printMazePath(char maze[4][4],int sr,int sc,int er, int ec, int sol[4][4]){
	if(sr==er and sc==ec){
		sol[sr][sc]=1;
			for(int i=0;i<=er;i++){
				for(int j=0;j<=ec;j++){
					cout<<sol[i][j]<<" ";
				}cout<<endl;
			}
			return;
	}

	if(sr>er or sc>ec){
		return;
	}

	if(maze[sr][sc]=='X'){
		return;
	}


	if(isRightSafe(maze,sr+1,sc)){
		sol[sr][sc+1]=1;
		printMazePath(maze,sr,sc+1,er,ec,sol);
		sol[sr][sc]=0;
	}
	if(isDownSafe(maze,sr,sc+1)){
		sol[sr+1][sc]=1;
		printMazePath(maze,sr+1,sc,er,ec,sol);
		sol[sr][sc]=0;
	}
}


int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
//////////////////////////////

char maze[4][4]={{'0','0','0','0'},
                 {'0','0','X','0'},
                 {'0','X','0','0'},
                 {'0','0','0','0'}};
int sol[4][4]={0};
//cout<<ratInAMaze(maze,0,0,3,3,sol);
printMazePath(maze,0,0,3,3,sol);


return 0;
}