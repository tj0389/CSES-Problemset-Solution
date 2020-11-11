
// Problem : Two Sets II
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1093
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 	
int mod=1e9+7;
int po(int x,int y,int m)  { if (y==0) return 1; int t=po(x,y/2,m)%m; t=(t*t)%m; if (y&1) return (t*x)%m;	return t%m; }

const int mxn=5e2;

int dp[mxn*(mxn+1)/2+1];

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
	int s=n*(n+1)/2;
	dp[0]=1;
	for (int i=1;i<=n;++i){
		for (int j=i*(i+1)/2;j>=1;--j){
			if (j-i>=0)
				dp[j]=(dp[j]+dp[j-i])%mod;
		}
    }
    if (s%2!=0)
    	cout<<0<<endl;
    else
    	cout<<(dp[s/2]*(mod+1)/2)%mod<<endl;

   	return 0;
}