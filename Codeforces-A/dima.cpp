#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int s = 0,d = 0;
	int l = 0,h = n-1;
	int turn  = 1;
	while(l <= h){
		if(a[l] > a[h]){
			if(turn)
				s+=a[l];
			else
				d+=a[l];
			l++;
		}else{
			if(turn)
				s+=a[h];
			else
				d+=a[h];
			h--;
		}
		if(turn)
			turn = 0;
		else
			turn = 1;
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}
