#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

long long int merge(long long int a[],long long int low,long long int mid,long long int high,long long int temp[]){

  long long int i=low,j=mid+1,k=low;
  long long int inv_count=0;
  while(i<=mid&&j<=high){
    if (a[i]<=a[j]){
      temp[k]=a[i];
      i++;
    }
    else{
      temp[k]=a[j];
      j++;
      inv_count+=(mid-i+1);
    }
    k++;
  }

  while(i<=mid){
    temp[k]=a[i];
    i++;
    k++;
  }

  while(j<=high){
    temp[k]=a[j];
    k++;
    j++;
  }

  for(long long int i=low;i<=high;i++) a[i]=temp[i];

  return inv_count;

}

long long int mergesort(long long int a[],long long int low,long long int high,long long int temp[]){
  long long int mid,inv_count=0;

  if (high>low){
    mid=(high+low)/2;
    // count inversion in left and right part
    inv_count+=mergesort(a,low,mid,temp);
    inv_count+=mergesort(a,mid+1,high,temp);

    // also count the inversions in merge one
    inv_count+=merge(a,low,mid,high,temp);
  }
  return inv_count;
}

long long int count_inversion(long long int a[],long long int n,long long int temp[]){
  return mergesort(a,0,n-1,temp);
}

int main(){
  read_input();

  long long int n;
  cin>>n;

  long long int a[n];
  long long int temp[n];
  for(long long int i=0;i<n;i++) cin>>a[i];
  long long int ans=count_inversion(a,n,temp);

  cout<<ans<<"\n";

  return 0;
}
