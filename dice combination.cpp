#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

// int fun(int n)
// {
//     if (n==0)
//         return 1;
//     else if (dp[n]!=-1)
//         return dp[n];
//     int ans=0;
//     for (int i=1;i<=6;++i)
//     {
//         if (n-i>=0)
//             ans+=fun(n-i);
//     }
//     dp[n]=ans;
//     return dp[n];
// }

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int dp[n+1]={-1};
        
    dp[0]=1;
    for (int i=1;i<=n;++i)
    {
        int ans=0;
        for (int j=1;j<=6;++j)
        {
            if (i-j>=0)
            {
                ans+=(dp[i-j]);
                ans=ans%mod;
            }
        }
        dp[i]=ans;
    }
    cout<<dp[n]<<endl;
        
    return 0;
}