
// Problem : Removal Game
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1097
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 	
int mod=1e9+7;
int po(int x,int y,int m)  { if (y==0) return 1; int t=po(x,y/2,m)%m; t=(t*t)%m; if (y&1) return (t*x)%m;	return t%m; }

vector<int> v;
int dp[5005][5005];

 int fun(int l,int r,int sum){
    	if (l==r)
    		return v[l];
    	if (r==l+1)
    		return max(v[l],v[r]);
    	if (dp[l][r]!=-1)
    		return dp[l][r];
    	dp[l][r]=max((sum-fun(l+1,r,sum-v[l])),(sum-fun(l,r-1,sum-v[r])));
    	
    	return dp[l][r];
}

signed main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0); 
    
    int n;
    cin>>n;
    v.resize(n);
    int sum=0;
    for (int i=0;i<n;++i){
    	cin>>v[i];
    	sum+=v[i];
    }
    memset(dp, -1, sizeof(dp));
    cout<<fun(0,n-1,sum)<<endl;
    
   	
   
   	return 0;
}