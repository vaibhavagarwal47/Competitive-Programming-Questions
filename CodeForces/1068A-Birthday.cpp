// Problem Name : 1068A-Birthday
// Problem Link : https://codeforces.com/problemset/problem/1068/A
// Submission Link : https://codeforces.com/contest/1068/submission/177369798

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define ff first
#define ss second
#define sortvec(v) sort(v.begin(), v.end())
#define revvec(v) reverse(v.begin(), v.end())


void solve()
{
    ll n,m,k,l;
    cin>>n>>m>>k>>l;

    double need = (l+k)*1.0;

    ll perHead = ceil(need/m);

    ll totCoins = m*perHead;

    if(totCoins>n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<perHead<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << fixed << setprecision(10);

    ll tc = 1 ;
    // cin >> tc;

    for(ll i=1;i<=tc;i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
}
