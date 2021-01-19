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
	int n;
	cin>>n;
	int a[n];
	int ans=0;
	for (int i=0;i<n;i++) cin>>a[i];
	int left[n]={0};
	int right[n]={0};

	for (int i=1;i<n;i++) left[i]=max(left[i-1],a[i-1]);
	for (int i=n-2;i>=0;i--) right[i]=max(right[i+1],a[i+1]);

	for (int i=1;i<n-1;i++){
		int min_temp=min(left[i],right[i]);
		if (min_temp>a[i]){
			ans+=min_temp-a[i];
		}
	}
	cout<<ans<<"\n";
	return 0;
}