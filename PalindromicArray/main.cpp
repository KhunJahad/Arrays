#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

bool check(int n){
	string s=to_string(n);
	string rev(s.rbegin(),s.rend());
	if (s==rev) return true;
	return false;
}

int main(){
	read_input();
	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) cin>>arr[i];
		int flag=0;
		for (int i=0;i<n;i++){
			if (!check(arr[i])){
				cout<<"0\n";
				flag=1;
				break;
			}
		}
		if (!flag) cout<<"1\n";
	}
	return 0;
}