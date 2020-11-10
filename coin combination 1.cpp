#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7,mm=1e6;

int dp[mm+1];

signed main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    std::vector<int> v(n);
    for (int i=0;i<n;++i)
        cin>>v[i];
    dp[0]=1;
    for (int i=1;i<=m;++i)
    {
        int ans=0;
        for (int j=0;j<n;++j){
            if (i>=v[j]){
                ans+=dp[i-v[j]];
                ans=ans%mod;
            }
        }
        dp[i]=ans;
    }
    cout<<dp[m];
}
