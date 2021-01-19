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
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	int a;
	int b;
	cin>>a>>b;
	if (a>b) swap(a,b);
	int low=0;
	int mid=0;
	int high=n-1;
	while (mid<high){

		if (arr[mid]<a){
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if (arr[mid]>b){
			swap(arr[mid],arr[high]);
			high--;
		}
		else{
			mid++;
		}
	}
	if (arr[low]>arr[high]){
		swap(arr[low],arr[high]);
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}