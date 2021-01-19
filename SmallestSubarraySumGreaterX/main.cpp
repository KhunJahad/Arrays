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
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int ans=n;
	int start=0;
	int end=0;
	int cur_sum=0;
	while(end<n){
		while (cur_sum<=x && end <n){
			cur_sum+=a[end];
			end++;
		}
		while(cur_sum>x && start <n){
			ans=min(end-start,ans);
			cur_sum-=a[start];
			start++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}