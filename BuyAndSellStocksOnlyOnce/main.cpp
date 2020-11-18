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
  for(int i=0;i<n;i++) cin>>a[i];
  int ans=0;
  if (n==1||n==0){
    cout<<ans<<"\n";
    return 0;
  }
  ans=a[1]-a[0];
  int min_elem=a[0];

  for(int i=1;i<n;i++){
    ans=max(ans,a[i]-min_elem);
    min_elem=min(min_elem,a[i]);
  }
  ans=max(0,ans);
  cout<<ans<<"\n";
  return 0;
}
