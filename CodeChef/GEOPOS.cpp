#include <bits/stdc++.h> 
using namespace std; 
bool isPossible(long a[], long n) 
{
	long sum = 0, maxsum = 0; 
	for (long i = 0; i < n; i++) 
    { 
		sum = sum+ a[i]; 
		maxsum = max(a[i], maxsum); 
	} 
 
	if ((sum - maxsum) > maxsum)
    {
        return true; 
    }
	return false; 
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if (isPossible(a,n))
        {
            cout << "Yes"<<endl;
        }
	    else
        {
            cout << "No"<<endl;
        }
    }
	return 0; 
}
