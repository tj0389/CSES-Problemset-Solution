#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<2<<endl;

    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    set<int> s;
    int ans=1;
    for (int i=0;i<n;++i)
        cin>>v[i];
    for (int i=0;i<n;++i){
        if (v[i]==0){
            s.clear();
            if (i-1>=0){
                s.insert(v[i-1]);
                s.insert(abs(v[i-1]-1));
                s.insert(abs(v[i-1]+1));
            }
            if (i+1<=n-1){
                s.insert(v[i+1]);
                s.insert(abs(v[i+1]-1));
                s.insert(abs(v[i+1]+1));
            }
        }
        ans*=s.size();
    }
    cout<<ans<<endl;
    return 0;
}