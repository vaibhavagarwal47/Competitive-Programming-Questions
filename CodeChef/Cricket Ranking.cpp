// Question CODE: CRICRANK
// Question: https://www.codechef.com/START6C/problems/CRICRANK
/* Input: 
3
0 1 2
2 3 4
10 10 10
8 8 8
10 0 10
0 10 0
*/
/* Output:
B
A
A
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r1,r2,w1,w2,c1,c2,count1=0,count2=0;
        cin>>r1>>w1>>c1;
        cin>>r2>>w2>>c2;
        if(r1>=r2)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        if(w1>=w2)
        {
            count1++;
        }
        else{
            count2++;
        }
        if(c1>=c2)
        {
            count1++;
        }
        else{
            count2++;
        }
        if(count1>=count2)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}