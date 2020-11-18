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
  
  int n,m;
  cin>>n>>m;
  int a[n],b[m];

  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  
  int i=n-1;
  int j=0;
  while(i>=0&&j<m){
    if (a[i]>=b[j]){
      swap(a[i],b[j]);
    }
    i--;
    j++;
  }

  sort(a,a+n);
  sort(b,b+m);

  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  for(int i=0;i<m;i++) cout<<b[i]<<" ";


  return 0;
}
