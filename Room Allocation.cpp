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
    std::vector<pair<int,int>> v(n);
    std::vector<int> ans(n),a;
    
    for (int i=0;i<n;++i)
        cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());

    int count=1;
    a.push_back(v[0].second);
    ans[0]=count;
    count+=1;

    for (int i=1;i<n;++i)
    {
        int tmp=lower_bound(a.begin(),a.end(),v[i].first)-a.begin()-1;
        if (tmp!=-1)
        {
            ans[i]=ans[tmp];
            a.erase(a.begin()+tmp);
            a.push_back(v[i].second);
        }
        else
        {
            a.push_back(v[i].second);
            ans[i]=count;
            count+=1;
        }
    }
    cout<<a.size()<<endl;
    for (int i=0;i<n;++i)
        cout<<ans[i]<<" ";
    
    return 0;
}