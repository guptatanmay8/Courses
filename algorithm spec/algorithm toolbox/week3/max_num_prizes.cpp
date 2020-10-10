#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define ll long long
#define sz(a) (int)(a.size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
#define fr(i,n) for(int i=0;i<n;i++)
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

typedef struct cup
{
    int a;
    int b;
}cup;

bool comp1(cup cup1,cup cup2)
{
    return cup1.a<cup2.a;
}
void solve()
{
    // int n;
    // cin>>n;
    // vector<cup> v;
    // // ll ans=0;
    // fr(i,n)
    // {
    //     cin>>v[i].a>>v[i].b;
    // }
    // sort(all(v),comp1);
    // vi b(n);
    // fr(i,n)
    // b[i]= v[i].b;
    // // sort(all(b));
    // // fr(i,n)
    // // ans=ans+ a[i]*b[i];
    // vi ans;
    // int a=0,temp=0;
    // int i;
    // cout<<v[0].a<<" "<<v[0].b;
    // // while(a<n)
    // // {
    // //     temp=*(min_element(b.begin()+a,b.end()));
    // //     ans.pb(temp);
    // //     i=a;
    // //     while(v[i].a<=temp)
    // //     {
    // //         i++;
    // //     }
    // //     a=i;
    // // }
    // // cout<<ans.size()<<endl;
    // // tr(it,ans)
    // // cout<<*it<<" ";
    // // cout<<ans;
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    vi v;
    while(n-sum-i>i)
    {
        sum=sum+i;
        v.pb(i);
        i++;
    }
    v.pb(n-sum);
    cout<<v.size()<<endl;
    tr(it,v)
    cout<<*it<<" ";
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
    //  solve();
    //  cout<<endl;
    // }
    solve();
    return 0;
    
}



