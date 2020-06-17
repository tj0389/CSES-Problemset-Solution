#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

int n,m;
vector<vector<int>> v(100001);
std::vector<int> tmp;
bool vis[100001]={false};

bool dfs(int root,int parent)
{
    vis[root]=1;
    tmp.push_back(root);
    for (auto it:v[root])
    {
        if (vis[it]==false)
        {
            if (dfs(it,root)==true)
            {
                return true;
            }
        }
        else if (it!=parent)
        {
            tmp.push_back(it);
            return true;
        }        
    }
    tmp.clear();
    return false;
    

}

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m;

    int x,y;
    for (int i=0;i<m;++i)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    bool ans=dfs(x,-1);
    std::vector<int> ttt;
    if (ans)
    {
        int a=tmp[tmp.size()-1];
        ttt.push_back(a);
        for (int i=tmp.size()-2;i>=0;--i)
            {
                ttt.push_back(tmp[i]);
                if (tmp[i]==a)
                    break;
            }
        cout<<ttt.size()<<endl;
        for (int i=ttt.size()-1;i>=0;--i)
            cout<<ttt[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"IMPOSSIBLE"<<endl;

      
    return 0;
}