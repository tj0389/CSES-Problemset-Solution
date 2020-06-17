#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7;

bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    if (a.second!=b.second)
        return a.second<b.second;
    else
        return a.first>b.first;
}

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
    std::vector<pair<int,int>> a(n);

    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;

    sort(a.begin(), a.end(),cmp);

    int count=1;
    int i=0;
    for (int j=1;j<n;++j)
    {
        if (a[i].second<=a[j].first)
            {
                ++count;
                i=j;
            }
    }
    cout<<count<<endl;


    return 0;
    
}