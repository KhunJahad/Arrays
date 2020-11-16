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

  int i=0;
  int j=n-1;

  while(i<j){
  	int temp=arr[i];
  	arr[i]=arr[j];
  	arr[j]=temp;
    i++;
    j--;
  }

  for(int i=0;i<n;i++){
  	cout<<arr[i]<<" ";
  }
  
  return 0;
}
