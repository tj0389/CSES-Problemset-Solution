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

    int n;
    cin>>n;
    std::vector<int> a(n);
    multiset<int> s;
    int m=INT_MIN;
    
    for (int i=0;i<n;++i)
        {
            cin>>a[i];
            m=max(m,a[i]);
        }

    s.insert(a[0]);
    for (int i=1;i<n;++i)
    {
        auto it=s.upper_bound(a[i]);
        if (it!=s.end())
            s.erase(s.find(*it));
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}