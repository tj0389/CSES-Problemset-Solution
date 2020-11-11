
// Problem : Rectangle Cutting
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1744
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 	
int mod=1e9+7;
int po(int x,int y,int m)  { if (y==0) return 1; int t=po(x,y/2,m)%m; t=(t*t)%m; if (y&1) return (t*x)%m;	return t%m; }


signed main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0); 

    int a,b;
    cin>>a>>b;
    int dp[a+1][b+1]={0};
    for (int i=1;i<=a;++i){
    	for (int j=1;j<=b;++j){
    		if (i!=j)
    			dp[i][j]=mod;
    		for (int k=1;k<i;++k)
    			dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
    		for (int k=1;k<j;++k)
    			dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
    	}
    }
    cout<<dp[a][b]<<endl;
   	return 0;
}