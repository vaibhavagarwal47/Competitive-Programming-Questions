// Question CODE: FCTRL
// Question: https://www.codechef.com/LRNDSA01/problems/FCTRL
/* Input:  
6
3
60
100
1024
23456
8735373
*/
/* Output:
0
14
24
253
5861
2183837
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	long long int n,zeros;
	while(t--)
	{
	    zeros = 0;
	    cin>>n;
	    long long int x;
	    while(n>4)
	    {
	        x = n/5;
	        zeros+=x;
	        n = x;
	    }
	    cout<<zeros<<endl;
	}
	return 0;
}