#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
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
    int a[n];
    for (int i=0;i<n;++i)
        cin>>a[i];

    int arr[m + 1][n]; 
    for (int i = 0; i < n; i++) 
        arr[0][i] = 1; 

    for (int i = 1; i <=m; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            int x = (i-a[j] >= 0) ? arr[i - a[j]][j]%mod : 0; 

            int y = (j >= 1) ? arr[i][j - 1]%mod : 0; 

            arr[i][j] = (x + y)%mod; 
        } 
    } 
    cout<<arr[m][n-1]<<endl;
    

        
    return 0;
}