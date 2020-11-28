#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[4];
	for(int i = 0; i < 4; i++)
		cin>>a[i];
	string game;
	cin>>game;
	int cal = 0;
	for(int i = 0; i < game.size(); i++){
		int ind = game[i] - '0';
		cal += a[ind-1];
	}
	cout<<cal<<endl;
	return 0;
}
