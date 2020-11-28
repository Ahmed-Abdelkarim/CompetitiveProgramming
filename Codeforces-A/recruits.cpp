#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int total = 0, temp = 0, sum = 0;
	for(int i = 0; i < n; i++){
		cin>>temp;
		if(temp == -1)
			if(!total)
				sum++;
			else
				total--;
		else
			total+= temp;
	}
	
	cout<<sum<<endl;
	return 0;
}
