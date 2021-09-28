// Question CODE: HOOPS
// Question: https://www.codechef.com/LTIME96C/problems/HOOPS
/* Input:
2
1
3
*/
/* Output:
1
2
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;
        }
    }
    return 0;
}