#include <bits/stdc++.h>

using namespace std;

/*
int countAdj(int n, int m, char mines[n][m], int i , int j){
	//i-1 j-1
	//i-1 j
	//i-1 j+1
	//i j-1
	//i j
	//i j+1
	//i+1 j-1
	//i+1 j
	//i+1 j+1
	int cnt = 0;
	for(int x = -1; x < 2; x++)
		for(int y = -1; y < 2; y++)
			if(mines[i+x][j+y] == '*' && (x != y != 0))
				cnt++;
	return cnt;
	
}
*/
int main(){
	int n, m, f;
	cin>>n>>m;
	f = 1;
	while(n!=0 && m!=0){
		if(f > 1)
			cout<<endl;
		cout<<"Field #"<<f<<":"<<endl;
		char mines[n][m];
		string soln[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin>>mines[i][j];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++){
				int cnt = 0;
				if(mines[i][j] == '.'){
					for(int x = -1; x <=1; x++)
						for(int y = -1; y <= 1; y++){
							if(i+x > -1 && i+x < n && j+y > -1 && j+y < m)
								if(mines[i+x][j+y] == '*')
									cnt++;
						}
					soln[i][j] = to_string(cnt);
				}	
				else soln[i][j] = '*';
			}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout<<soln[i][j];
			cout<<endl;
		}
		f++;
		cin>>n>>m;
	}
	return 0;
}
