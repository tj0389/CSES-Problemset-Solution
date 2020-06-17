#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    std::vector<int> mi(n+1);
    mi[0]=INT_MAX;
    for (int i=1;i<=n;++i)
    {
        int a;
        cin>>a;
        mi[i]=min(mi[i-1],a);
    }
    for (int i=0;i<q;++i)
    {
        int x,y;
        cin>>x>>y;
        cout<<min(mi[x],mi[y])<<endl;
    }
    
}