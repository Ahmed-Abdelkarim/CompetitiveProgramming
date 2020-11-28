#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s, prev = " ";
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin>>s;
		if(s[0] != prev[0])
			cnt++;
		prev=s;
	}
	cout<<cnt<<endl;
	return 0;
}
