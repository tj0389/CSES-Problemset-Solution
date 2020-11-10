
// Problem : Edit Distance
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1639
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 	
int mod=1e9+7;
int po(int x,int y,int m)  { if (y==0) return 1; int t=po(x,y/2,m)%m; t=(t*t)%m; if (y&1) return (t*x)%m;	return t%m; }

void fun(){
	
}

signed main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0); 

  	string a,b;
  	cin>>a>>b;
  	int n=a.size();
  	int m=b.size();
  	int dp[n+1][m+1];
  	for (int i=0;i<n+1;++i)
  		dp[i][0]=i;
  	for (int j=0;j<m+1;++j)
  		dp[0][j]=j;
  	for (int i=1;i<n+1;++i){
  		for (int j=1;j<m+1;++j){
  			dp[i][j]=min({dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1]+(a[i-1]==b[j-1]?0:1)});
  		}
  	}
  	cout<<dp[n][m]<<endl;
   	
   
   	return 0;
}