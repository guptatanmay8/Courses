#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define ll long long
#define sz(a) (int)(a.size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
#define fr(i,n)	for(int i=0;i<n;i++)
#define present(c,x) (c.find(x)!=c.end()) //for set/map etc.
#define cpresent(c,x) (find(all(c),x)!=c.end())
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
int N=100001;
int mod=1e9+7;
int min(int a,int b){if(a<b) return a; else return b;}
int max(int a,int b){if(a>b) return a; else return b;}
int power(int a,int b){int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int p, int q){if(p%q==0) return q; else{return gcd(q,p%q);}} 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
// int ans()
// {

// }
void solve()
{
	int w, n;
	cin>>w>>n;
	vi v(n);
	fr(i,n)cin>>v[i];
	// cout<<ans();
	// std::vector<char> v;
	vector<vi> ans(n+1,vi(w+1));
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)ans[i][j]=0;
			else
			{
				if(v[i-1]<=j)
				{
					ans[i][j]=max(ans[i-1][j-v[i-1]]+v[i-1] , ans[i-1][j]);
				}
				else
					ans[i][j]=ans[i-1][j];
			}
		}
	}
	// fr(i,n+1)
	// {
	// 	fr(j,w+1)
	// 	{
	// 		cout<<ans[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	cout<<ans[n][w];
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	solve();
	// 	cout<<endl;
	// }
	solve();
	
	// cout<<79842846720%1000000007;
	return 0;
	
}


