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

    int n,m;
    cin>>n>>m;
    std::vector<int> a(n),b(m);
    for (int i=0;i<n;++i)
        cin>>a[i];
    for (int i=0;i<m;++i)
        cin>>b[i];
    sort(a.begin(), a.end());
    for(int i=0;i<m;++i)
    {
        int tmp=lower_bound(a.begin(),a.end(),b[i]+1)-a.begin()-1;
        if (tmp!=-1)
            {
                cout<<a[tmp]<<endl;
                a.erase(a.begin()+tmp);
            }
        else
            cout<<tmp<<endl;
       
    }
    return 0;
}