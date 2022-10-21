// Problem Name : Masha and a Beautiful Tree
// Problem Link : https://codeforces.com/contest/1741/problem/D
// Language : C++


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
    int n;
    cin>>n;
 
    ll ans = 0;
 
    int arr[n];
 
    vector<ll>v;
 
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);
    }
 
    if(n==1)
    {
        cout<<"0"<<endl;
        return;
    }
 
    if(n==2)
    {
        if(arr[0]<=arr[1])
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        return;
    }
 
    ll ct=1;
 
    while(1)
    {
        vector<ll>v1;
 
        for(ll i=1;i<v.size();i+=2)
        {
            if(abs(v[i]-v[i-1])!=ct)
            {
                cout<<"-1"<<endl;
                return;
            } 
 
            if(v[i-1]>v[i])
            {
                ans++;
            }
 
            v1.push_back(min(v[i],v[i-1]));
        }
 
        v=v1;
        ct*=2;
 
        if(v.size()<2)
        {
            break;
        }
 
        v1.clear();
    }
 
    cout<<ans<<endl;
 
    ans=0;
}

int main()
{
    ll tc = 1;
    cin >> tc;

    for (ll i = 1; i <= tc; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}
