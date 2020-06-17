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
    for (int i=0;i<n-2;++i)
    {
        int x=k-v[i];
        for (int j=i+1;j<n;++j)
        {
            if(m.find(x-v[j])!=m.end())
            {   
                cout<<i+1<<" "<<m[x-v[j]]+1<<" "<<j+1<<endl;
                f=1;
                return 0;
            }
            else
                m[v[j]]=j;
        }
        m.clear();
    }
    if (f==0)
    cout<<"IMPOSSIBLE"<<endl;


    return 0;
    
}