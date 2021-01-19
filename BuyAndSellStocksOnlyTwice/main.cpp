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
	int profit[n]={0};
	int ans=0;

	int max_price=arr[n-1];

	for (int i=n-2;i>=0;i--){
		 if (arr[i]>max_price) max_price=arr[i];
		 profit[i]=max(profit[i+1],max_price-arr[i]);
	}
	// now we will have the maximum possible profit we can have
	
	int min_prize=arr[0];
	
	for (int i=1;i<n;i++){
		if (arr[i]<min_prize) min_prize=arr[i];
		profit[i]=max(profit[i-1],profit[i]+arr[i]-min_prize);
	}
	return profit[n-1];
}

int main(){
	read_input();
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++) cin>>arr[i];
	cout<<"The maximum profit is "<<profit(n,arr)<<"\n";
}