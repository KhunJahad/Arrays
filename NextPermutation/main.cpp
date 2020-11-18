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

  int num1=-1;
  int num2=-1;
  for(int i=n-1;i>=0;i--){
    if (i>=1&&a[i]>a[i-1]){
      num1=i-1;
      break;
    }
  }
  sort(a+num1+1,a+n);
  for(int i=num1+1;i<n;i++){
    if (a[num1]<a[i]){
      num2=i;
      break;
    }
  }

  if (num1==-1||num2==-1){
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
  }
  swap(a[num1],a[num2]);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}
