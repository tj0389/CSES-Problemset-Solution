#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7;

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
    std::vector<int> v(n);


    for (int i=0;i<n;++i)
        cin>>v[i];

    int f=0;
    for (int i=0;i<n;++i)
    {
        if(m.find(k-v[i])!=m.end())
        {
            cout<<m[k-v[i]]+1<<" "<<i+1<<endl;
            f=1;
            break;
        }
        else
            m[v[i]]=i;
    }
    if (f==0)
    cout<<"IMPOSSIBLE"<<endl;


    return 0;
    
}