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
  set <int> s;
  for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
  } 
  for(int i=0;i<m;i++){
    cin>>b[i];
    s.insert(b[i]);
  } 

  cout<<s.size()<<"\n";
  return 0;
}
