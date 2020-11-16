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
  for(int i=n-1;i>=1;i--){
    swap(a[i],a[i-1]);
  } 

  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}
