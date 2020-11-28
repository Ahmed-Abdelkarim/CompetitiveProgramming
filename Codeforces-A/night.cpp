#include <bits/stdc++.h>

using namespace std;

int main(){
	string name;
	cin>>name;
	int clk;
	int counterClk;
	int cnt = 0;
	char pointer = 'a';
	for(int i = 0; i < name.size(); i++){
		if(pointer - name[i] > 0){
			clk = pointer - name[i];
			counterClk = ('z' - pointer) + 1 + (name[i] - 'a');
		}
		else{
			clk = name[i] - pointer;
			counterClk = (pointer - 'a') + 1 + ('z' - name[i]);
		}
		cnt += min(clk, counterClk);
		pointer = name[i];
	}
	cout<<cnt<<endl;
	return 0;
}
