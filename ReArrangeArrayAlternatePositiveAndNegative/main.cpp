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
  int j=0;
  for(int i=0;i<n;i++){
    
    if (a[i]<0&&i%2){
      for(int j=i+1;j<n;j++){
        if (a[j]>0){
          reverse(a+i,a+j+1);
          break;
        }
      }
    }
    else if (a[i]>0&&i%2==0){
      for(int j=i+1;j<n;j++){
        if (a[j]<0){
          reverse(a+i,a+j+1);
          break;
        }
      }
    }
  }

  for(int i=0;i<n;i++) cout<<a[i]<<" ";

  return 0;
}
