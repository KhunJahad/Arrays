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
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int i=0;i<n;i++){
		int req=k-a[i];
		int start=i+1;
		int end=n-1;
		while(start<end){
			if (a[start]+a[end]==req){
				cout<<"found\n";
				return 0;
			}
			else if (a[start]+a[end]>req){
				end--;
			}
			else{
				start++;
			}
		}
	}
	cout<<"not found\n";
	return 0;
}