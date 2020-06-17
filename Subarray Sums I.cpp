#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    unordered_map<int,int> m;
    
    int pre=0,count=0;
    for (int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        pre+=a;
        if (pre==k)
            ++count;
        if (m.find(pre-k)!=m.end())
            count+=m[pre-k];
        m[pre]++;
    }
    cout<<count<<endl;

    return 0;
}