#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int profit(int n,int arr[]){
	int ans=0;
	for (int i=0;i<n;i++){
		int first_trans=0;
		int second_trans=0;
		int min_temp=0;
		for (int j=0;j<i;j++){
			if (arr[min_temp]>arr[j]) min_temp=j;
			else if (arr[min_temp]<arr[j]){
				first_trans=max(first_trans,arr[j]-arr[min_temp]);
			}
		} 
		min_temp=i;
		for (int k=i;k<n;k++){
			if (arr[min_temp]>arr[k]) min_temp=k;
			else if (arr[min_temp]<arr[k]){
				second_trans=max(second_trans,arr[k]-arr[min_temp]);
			}
		}
		ans=max(ans,first_trans+second_trans);
	}
	return ans;
}

int main(){
	read_input();
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++) cin>>arr[i];
	cout<<"The maximum profit is "<<profit(n,arr)<<"\n";
}