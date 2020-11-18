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

  int n1,n2,n3;
  cin>>n1>>n2>>n3;

  int a[n1],b[n2],c[n3];
  vector <int> ans;
  
  for(int i=0;i<n1;i++) cin>>a[i];
  for(int i=0;i<n2;i++) cin>>b[i];
  for(int i=0;i<n3;i++) cin>>c[i];

  int i=0,j=0,k=0,counter=-1;
  while(i<n1&&j<n2&&k<n3){
    if (a[i]==b[j]&&b[j]==c[k]){
      if(counter>=0&&ans[counter]==a[i]){
        i++;
        j++;
        k++;
        continue;
      }
      counter++;
      ans.push_back(a[i]);
      i++;
      j++;
      k++;
    }
    else if (a[i]<b[j]) i++;
    else if (b[j]<c[k]) j++;
    else k++;
  }
  for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
  return 0;
}
