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
	for (int i=0;i<n;i++) cin>>a[i];
	for (int j=0;j<m;j++) cin>>b[j];
	int i=0;
	int j=0;
	int total=(n+m)/2;
	int m1=-1,m2=-1;
	int count;
	if ((m+n)%2==1){
		for(count=0;count<=(n+m)/2;count++){

			if (i!=n && j!=m) m1 = (a[i]<b[j]) ? a[i++] : b[j++];
			else if (i<n) m1=a[i++];
			else m1=b[j++];
		}
		cout<<m1;
	}

	else{
		for (count=0;count<=(n+m)/2;count++){
			m2=m1;
			if (i!=n && j!=m) m1= (a[i]<b[j]) ? a[i++] : b[j++];
			else if (i<n) m1=a[i++];
			else m1=b[j++];
		}
		cout<<(m1+m2)/2;
	}
	return 0;
}