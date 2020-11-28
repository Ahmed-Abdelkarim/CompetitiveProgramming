#include <bits/stdc++.h>

using namespace std;

int main(){
	int m[5][5];
	int min = 0;
	for(int i = 0; i <5; i++){
		for(int j = 0; j < 5; j++){
			cin>>m[i][j];
			if(m[i][j] == 1)
				min = abs(i - 2) + abs(j - 2);
		}
	}
	cout<<min<<endl;
	return 0;
}
