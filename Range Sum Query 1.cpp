#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

signed main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("outputt.txt", "w", stdout);
	// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    std::vector<int> pre(n+1);
    pre[0]=0;
    for (int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        pre[i+1]=pre[i]+a;
    }
    for (int i=0;i<q;++i)
    {
        int x,y;
        cin>>x>>y;
        cout<<pre[y]-pre[x-1]<<endl;
    }
    
}