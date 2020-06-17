#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m=0;
    cin>>n;
    int a[n+1];
    for (int i=1;i<=n;++i)
    {
        cin>>a[i];
        m+=a[i];
    }
    set<int> s;
    bool pos[m+1][n+1]={false};
    pos[0][0]=true;
    for (int k = 1; k <= n; k++)
    {
        for (int x = 0; x <= m; x++)
        {
            if (x-a[k] >= 0) 
                pos[x][k] |= pos[x-a[k]][k-1];
            pos[x][k] |= pos[x][k-1];
            if (pos[x][k] && x>0)
                s.insert(x);
        }
    }
    cout<<s.size()<<endl;
    for (auto it:s)
        cout<<it<<" ";
    

        
    return 0;
}