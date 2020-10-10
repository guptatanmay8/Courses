// #include<bits/stdc++.h>
// using namespace std;
// // #define int long long
// #define ll long long
// #define sz(a) (int)(a.size())
// #define pb push_back
// #define all(c) c.begin(),c.end()
// #define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
// #define fr(i,n) for(int i=0;i<n;i++)
// #define present(c,x) (c.find(x)!=c.end()) //for set/map etc.
// #define cpresent(c,x) (find(all(c),x)!=c.end())
// typedef pair<int,int> pi;
// typedef vector<int> vi;
// typedef vector<pair<int,int>> vp;
// int N=100001;
// int mod=1e9+7;
// int min(int a,int b){if(a<b) return a; else return b;}
// int max(int a,int b){if(a>b) return a; else return b;}
// int power(int a,int b){int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// int gcd(int p, int q){if(p%q==0) return q; else{return gcd(q,p%q);}} 
// bool comp(int a, int b) 
// { 
//     return (a < b); 
// }

// typedef struct cup
// {
//     int a;
//     int b;
// }cup;

// bool comp1(cup cup1,cup cup2)
// {
//     return cup1.a<cup2.a;
// }
// void solve()
// {
    
    
// }

// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif
//     // int t;
//     // cin>>t;
//     // while(t--)
//     // {
//     //  solve();
//     //  cout<<endl;
//     // }
//     solve();
//     return 0;
    
// }
#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

string largest_number(vector<string> a) {
  //write your code here
  string s;
  for(int i=1;i<a.size();i++)
  {
    for(int j=0;j<a.size()-i;j++)
    {
      if(a[j]+a[j+1]<a[j+1]+a[j])
      {
        s= a[j];
        a[j]=a[j+1];
        a[j+1]= s;
      }
    }
  }
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}



