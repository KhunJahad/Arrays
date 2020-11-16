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
  int arr[n];
  for(int i=0;i<n;i++) {
  	cin>>arr[i];
  }

  int max_ind=0;
  int min_ind=0;

  for(int i=0;i<n;i++){
    if (arr[max_ind]<arr[i]){
      max_ind=i;
    }
    if (arr[min_ind]>arr[i]){
      min_ind=i;
    }
  }

  cout<<" The maximum number is : "<<arr[max_ind]<<"\n";
  cout<<" The minimum number is : "<<arr[min_ind]<<"\n";
  return 0;
}
