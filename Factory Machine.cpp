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

    int n,k;
    cin>>n>>k;
    std::vector<int> a(n);
    
    int ma=INT_MIN;
    for (int i=0;i<n;++i)
    {
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    sort(a.begin(),a.end());
    int low=1;
    int high=ma*k;
    int ans=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int tmp=0;
        for(int i=0;i<n;++i)
            tmp+=(mid/a[i]);
        if (tmp<k)
            low=mid+1;
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans<<endl;

    return 0;
}