#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main(){
	read_input();
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int m;
		cin>>m;
		sort(a,a+n);
		ll ans=1e9;
		for (int i=0;i<=n-m;i++){
			ll temp=a[m-1+i]-a[i];
			ans=min(temp,ans);
		}
		cout<<ans<<"\n";
		t--;
	}
	return 0;
}