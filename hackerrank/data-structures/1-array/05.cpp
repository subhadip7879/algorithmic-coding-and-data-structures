//https://www.hackerrank.com/challenges/sparse-arrays/problem
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

int32_t main()
{
    IOS;
    vector<string> v;
    int n,count,k;
    string temp;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	v.push_back(temp);
    }
    cin>>k;
    for (int i = 0; i < k; ++i)
    {
    	cin>>temp;
    	count =0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (v[i] == temp)
    		{
    			count++;
    		}
    	}
    	cout<<count<<endl;
    	count=0;
    }
    return 0;
}