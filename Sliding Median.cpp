#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    std::vector<int> a(n);
    multiset<int> s;
    
    for (int i=0;i<n;++i)
        cin>>a[i];

    for (int i=0;i<k;++i)
        s.insert(a[i]);
    auto it = next(s.begin(),(k-1)/ 2);
    cout<<*it<<" ";

    for (int i=0;i<n-k;++i)    
    {
        s.erase(s.find(a[i]));
        s.insert(a[i+k]);
        auto it = next(s.begin(),(k-1) / 2);
        cout<<*it<<" ";
    }

    return 0;
}