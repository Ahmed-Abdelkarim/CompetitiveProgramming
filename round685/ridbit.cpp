#include <bits/stdc++.h>

using namespace std;

vector<int> divisors(int n){
	vector<int> divisors;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0)
			divisors.push_back(i);		
	}
	return divisors;
}
int minToOne(int n){
	int cnt = 0;
	vector<int> divs = divisors(n);
	while(n > 1){
		if(divs.empty()){
			n--;
			cnt++;
		}else{
			int d = n / divs[0];
			n /= d;
			cnt++;
		}
			//	cout<<n<<endl;
			divs = divisors(n);
	}
	cnt += (n-1);	
	return cnt;
}
int main(){
	int t;
	cin>>t;
	int a[t];
	for(int i = 0; i < t; i++){
			int n;
			cin>>n;
			
			a[i] = min(minToOne(n), minToOne(n-1)+1);
	}
	for(int i = 0; i < t; i++){
		cout<<a[i]<<endl;
	}

	return 0;
}
