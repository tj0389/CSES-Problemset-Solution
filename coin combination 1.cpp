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

    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;++i)
        cin>>a[i];
    int dp[m+2]={-1};
    dp[0]=1;
    for (int i=1;i<=m;++i)
    {
        int ans=0;
        for (int j=0;j<n;++j)
        {
            if (i-a[j]>=0 && dp[i-a[j]]!=-1)
                {
                    ans+=dp[i-a[j]];
                    ans%=mod;
                }    
        }
        dp[i]=ans;
    }
    cout<<dp[m]<<endl;
        
    return 0;
}