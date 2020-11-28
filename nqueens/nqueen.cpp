#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<pair<int, int>> queens, int n, int j){
/*
	This function checks for the possible positions to place the n queen.
*/
	for(int i = 0; i < n; i++){
		int x = queens[i].first;
		int y = queens[i].second;
		if(y == j || abs(n-x) == abs(j - y)) // checks if there is a queen on the same row/diagonal
			return false;
	}
	return true;
}

void displayQueens(vector<pair<int, int>> queens, int n){
/*
	This function displays the nqueens.
*/
	for(int i = 0; i < n; i++)
		cout<<queens[i].first<<" "<<queens[i].second<<endl;
}

bool nqueens(vector<pair<int, int>> queens, int n){
	if(n == queens.size()){//goal test
		displayQueens(queens, n);
		return true;
	}else{
		for(int j = 0; j < queens.size(); j++){//loops on all possible positions in this column
			if(isValid(queens, n, j)){//pruns the invalid position to decrease the search space.
				queens[n].first = n;
				queens[n].second = j;
				if(nqueens(queens, n+1))//explores the next column
					return true;
				else continue;
			}
		}
		return false;	
	}
}

int nqueensCount(vector<pair<int, int>> queens, int n){
/*
	This function calucaltes the number of solutions for the nqueen problem.
*/
	if(n == queens.size()){//goal test
		return 1;
	}else{
		int cnt = 0;
		for(int j = 0; j < queens.size(); j++){//loops on all possible positions in this column
			if(isValid(queens, n, j)){//pruns the invalid position to decrease the search space.
				queens[n].first = n;
				queens[n].second = j;
				cnt += nqueensCount(queens, n+1);
			}
		}
		return cnt;	
	}
}

int main(){
	int n;
	cin>>n;
	vector<pair<int, int>> queens(n);
	//display one solution of nqueen
	
	queens[0].first = 0;
	queens[0].second = 1;
	if(nqueens(queens, 1))
		cout<<"Done"<<endl;
	else
		cout<<-1<<endl;
		
	//count the solution of nqueens
	int cnt = 0;
	for(int j = 0; j < n; j++){
		queens[0].first = 0;
		queens[0].second = j;
		cnt+= nqueensCount(queens, 1);
	}
	cout<<cnt<<endl;
	
	
	return 0;
}
