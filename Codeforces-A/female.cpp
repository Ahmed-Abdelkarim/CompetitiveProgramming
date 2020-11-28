#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int counts[s.size()];
	/*for(int i = 0; i < s.size(); i++){
		counts[i] = s.count(s[i]);
	}*/
	sort(s.begin(), s.end(), greater<int>());
	int cnt = 0;
	for(int i = 1; i < s.size(); i++){
		if((s[i] - s[i-1]) != 0)
			cnt++;
	}
	if((cnt+1)%2 == 0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}
