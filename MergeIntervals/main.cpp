#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  sort(intervals.begin(),intervals.end());
  int num=intervals.size();
  vector <vector<int>> ans;
  for(int i=0;i<num;i++){
    vector <int> temp;
    temp.push_back(intervals[i][0]);
    int end=intervals[i][1];    
    while(i<num-1&&end>=intervals[i+1][0]){
      i++;
      if (end<intervals[i][1]) end=intervals[i][1];
    }
    temp.push_back(end);
    ans.push_back(temp);
  }
  return ans;
}

int main(){
  read_input();
  int n;
  cin>>n;
  vector <vector<int>> a;

  for(int i=0;i<n;i++){
    vector <int> v;
    for(int j=0;j<2;j++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    a.push_back(v); 
  }
  vector<vector<int>> ans=merge(a);

  for(int i=0;i<ans.size();i++){
    for(int c:ans[i]) cout<<c<<" ";
    cout<<"\n";
  }
  return 0;
}
