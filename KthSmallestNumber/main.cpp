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
  for(int i=0;i<n;i++) {
  	cin>>arr[i];
  }

  sort(arr,arr+n);

  cout<<arr[k-1]<<"\n";
  return 0;
}
