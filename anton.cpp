#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string games;
	cin>>games;
	int anton = 0, danik = 0;
	for(int i = 0; i < n; i++)
		if(games[i] == 'A')
			anton++;
		else
			danik++;
	if(anton == danik)
		cout<<"Friendship"<<endl;
	else if(anton > danik)
		cout<<"Anton"<<endl;
	else
		cout<<"Danik"<<endl;
	return 0;
}
