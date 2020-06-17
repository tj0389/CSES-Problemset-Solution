#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

signed main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
	// #endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ans;
    cin>>s;
    char tmp;
    map<char,int> a;
    for (int i=0;i<s.size();++i)
    	a[s[i]]++;
    int f=0;
    int count=0;
    for (char i='A';i<='Z';++i)
    {
    	if (a[i]%2!=0)
    	{
    		f++;
    		if (f>1)
    			break;
    		tmp=i;
    		count=a[i];	
    	}
    	else
    	{
    		a[i]=a[i]/2;
    		while(a[i]>0)
    		{
    			ans+=i;
    			a[i]--;
    		}
    	}
    }
    if (f>1)
    	cout<<"NO SOLUTION"<<endl;
    else{
    	string ans1=ans;
    	reverse(ans.begin(),ans.end());
    	cout<<ans1;
    	while(count--)
    		cout<<tmp;
    	cout<<ans<<endl;
    }


    return 0;
}