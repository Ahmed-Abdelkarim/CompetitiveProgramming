#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i = 0; i < n; i++){
		int h,g;
		cin>>h>>g;
		pair<int,int> p (h,g);
		v.push_back(p);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			if(v[i].first == v[j].second)
				cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
