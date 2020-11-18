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
  map <int,int> mp;
  for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  int ans=0;

  for(int i=0;i<n;i++){
    mp[a[i]]--;
    int req=k-a[i];
    if (mp[req]>0){
      ans+=mp[req];
    }
  }
  cout<<ans<<"\n";
  return 0;
}
