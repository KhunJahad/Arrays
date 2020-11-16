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
  int ans=0;
  int target=n-1;
  while(target!=0){
    int temp=target;
    for(int i=0;i<n;i++){
      if (target-i<=a[i]){
        target=i;
        break;
      }
    }
    ans++;
    if (target==temp){
      ans=-1;
      break;
    }
  }

  cout<<ans<<" ";
  return 0;
}
