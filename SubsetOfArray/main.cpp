#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

bool check (int n,int m, int a[],int b[]){
	sort(a,a+n);
	sort(b,b+m);

	for (int i=0;i<m;i++){
		if (!binary_search(a,a+n,b[i])) return false;
	}
	return true;
}

int main(){
	read_input();
	int t;
	cin>>t;
	while(t){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for (int i =0;i<n;i++) cin>>a[i];
		for (int i=0;i<m;i++) cin>>b[i];
		if (check(n,m,a,b)) cout<<"Yes\n";
		else cout<<"No\n";
		t--;
	}
}