#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int s[3];
	int cnt = 0;
	int sure = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <3;j++){
			cin>>s[j];
			if(s[j] == 1)
				sure++;
		}
		if(sure > 1)
			cnt++;
		sure = 0;
	}
	cout<<cnt<<endl;
	return 0;
}
