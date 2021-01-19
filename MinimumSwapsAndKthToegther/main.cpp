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
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	int cnt=0;
	
	for (int i=0;i<n;i++){
		if (arr[i]<=k) cnt++;
	}
	int bad=0;
	for (int i=0;i<cnt;i++){
		if (arr[i]>k) bad++;
	}
	int ans=bad;

	for (int i=0,j=cnt;j<n;i++,j++){
		
		if (arr[i]>k) bad--;
		if (arr[j]>k) bad++;
		ans=min(ans,bad);
	}
	cout<<ans<<"\n";

	return 0;
}