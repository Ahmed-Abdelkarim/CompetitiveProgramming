#include <bits/stdc++.h>

using namespace std;
bool findSubSeq(string s, string sub, string soln){
	int n = sub.size();
	for(int i = 0; i < n; i++){
		int r  = s.find(sub.substr(0, n-i-1));
		if(r == -1)
			return false;
		soln += s[r];
		if(soln == sub)
			return true;
		return findSubSeq(s.substr(r, n), sub.substr(n-i-1, n), soln);
	}
	return false;
		
}
int main(){
	int t;
	cin>>t;
	for(int i = 0; i < t; i++){
		int n, q;
		string s;
		cin>>n>>q;
		cin>>s;
		for(int j = 0; j < q; j++){
			int l,r;
			cin>>l>>r;
			string sub = s.substr(l-1,r);
			string seq = "";
			cout<<findSubSeq(s, sub, seq)<<endl;
		
		}
	
	}

	return 0;
}
