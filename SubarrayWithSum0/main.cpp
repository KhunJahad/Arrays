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
  bool ans=false;
  cin>>a[0];
  for(int i=1;i<n;i++) {
    cin>>a[i];
    a[i]+=a[i-1];
  }
  // if the prefix sum repeats then array has 0
  map <int,int> mp;
  for(int i=0;i<n;i++){
    if (mp[a[i]]>0||a[i]==0){
      ans=true;
      break;
    }
    mp[a[i]]++;
  }

  cout<<ans;

  return 0;
}
