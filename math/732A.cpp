#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, r;
	cin>>k>>r;
	int c = 1, x = k;
	while(x%10 != 0 && x%10 != r){
		c++;
		x = k*c;
	}
	cout<<c<<endl;
	return 0;
}
