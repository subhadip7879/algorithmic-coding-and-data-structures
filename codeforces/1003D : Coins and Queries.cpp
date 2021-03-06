#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

int32_t main()
{
    IOS;
    int n, q,k=32; 
    cin>>n>>q;
    int a[n];
    vector<int> f(k,0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        for(int j=0;j<32;j++)
        {
            if(a[i] == (1LL<<j))
                f[j]++;
        }
    }
    while(q--)
    {
        vector<int> reqd(k,0);
        int k;
        cin>>k;
        for(int j=0;j<32;j++)
        {
            if((k>>j) & 1)
                reqd[j]++;
        }
        int ans=0;
        int cur=0;
        for(int j=31;j>=0;j--)
        {
            cur+=reqd[j];
            int have=min(f[j], cur);
            cur-=have;
            ans+=have;
            cur*=2;
        }
        if(cur>0)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}