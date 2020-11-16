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

  int tortoise=a[0];
  int hare=a[0];
  do{
    hare=a[a[hare]];
    tortoise=a[tortoise];
  } while(tortoise!=hare);

  tortoise=a[0];
  while(tortoise!=hare){
    tortoise=a[tortoise];
    hare=a[hare];
  }
  cout<<hare<<"\n";
  return 0;
}
