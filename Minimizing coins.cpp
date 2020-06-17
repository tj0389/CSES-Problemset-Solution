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
    int dp[m+1]={-1};
        
    dp[0]=0;
    for (int i=1;i<=m;++i)
    {
        int ans=INT_MAX;
        for (int j=0;j<n;++j)
        {
            if (i-a[j]>=0)
            {
                if(dp[i-a[j]]!=-1)
                    ans=min(ans,dp[i-a[j]]+1);
            }    
        }
        dp[i]=ans;
    }
    if (dp[m]!=INT_MAX)
        cout<<dp[m]<<endl;
    else
        cout<<-1<<endl;
        
    return 0;
}