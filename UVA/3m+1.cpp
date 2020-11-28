#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, cnt, max, n;
	
	while(cin>>i>>j){
		cout<<i<<" "<<j<<" ";
		max = 0;
		if(i > j)
			swap(i,j);
			
		for(int x = i; x <= j; x++){
			cnt = 1, 
			n = x;
			while(n > 1){
				if(n % 2 == 0)
					n = n / 2;
				else 
					n = (n * 3) + 1;
				cnt++;
			}
			if(cnt >= max)
				max = cnt;
			
		}
	//cout<<max<<endl;
		cout<<max<<endl;
	}
	return 0;
}
