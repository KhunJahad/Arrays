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
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  int sum=0;
  int ans=a[0];
  for(int i=0;i<n;i++) {
    sum=max(a[i],sum+a[i]);
    ans=max(sum,ans);
  }

  cout<<ans<<" ";
  return 0;
}