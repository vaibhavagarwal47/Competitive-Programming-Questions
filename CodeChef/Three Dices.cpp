// Question CODE: THREDICE
// Question: https://www.codechef.com/START6C/problems/THREDICE
/* Input:
3
1 3
2 4
2 3
*/
/* Output:
0.333333
0
0.166666
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll t;
    cin>>t;
    int ar[]={1,2,3,4,5,6};
    while(t--)
    {
        int a,b,count=0,i=5;
        cin>>a>>b;
        int res=a+b;
        while(ar[i]-res>0)
        {
            count++;
            i--;
        }
        double ans=(double)count/6.0;
        cout<<ans<<endl;
    }
    return 0;
}