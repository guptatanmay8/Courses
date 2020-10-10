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



int Editdist(vi s , vi t , int n , int m)
{
	vector<vector<int>> editdistance(n+1, vi(m+1));
	for(int i=0;i<=n;i++)
	{
		for (int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			{
				editdistance[i][j]=0;
			}
			else if(s[i-1]==t[j-1])
			{
				editdistance[i][j]=editdistance[i-1][j-1]+1;
			}
			else
			{
				editdistance[i][j] = max(max(editdistance[i][j-1],editdistance[i-1][j]),editdistance[i-1][j-1]);
			}
		}
	}
	return editdistance[n][m];
}
void solve()
{
	int n ,m;
	cin>>n;
	vi v1(n);
	fr(i,n)cin>>v1[i];
	cin>>m;
	vi v2(m);
	fr(i,m)cin>>v2[i];
	cout<<Editdist(v1 ,v2, n,m);
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
	return 0;
	
}


