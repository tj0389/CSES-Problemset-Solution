#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"


void multiply(int *a,int &n,int num)
{
    int carry=0;
    for (int i=0;i<n;++i)
    {
        int p=a[i]*num+carry;
        a[i]=p%10;
        carry=p/10;
    }
    while(carry)
    {
        a[n]=carry%10;
        carry=carry/10;
        n++; 
    }    
}
signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;
    cin>>t;
    while(t--)
    {
        int a[10000]={0};

        int number;
        cin>>number;

        a[0]=1;
        int n=1;
        for (int i=2;i<=number;++i)
            multiply(a,n,i);

        for (int i=n-1;i>=0;--i)
            cout<<a[i];
        cout<<endl;
    }



	return 0;
}