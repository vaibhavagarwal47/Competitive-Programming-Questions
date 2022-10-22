// Question CODE: MINLCS
// Question LINK: https://www.codechef.com/problems/MINLCS
// Question Solution LINK: https://www.codechef.com/viewsolution/77890799

// Question:Chef is given two strings AA and BB of length NN containing lowercase English letters.
// Chef can rearrange both the strings in any way he wants. He wants to minimize the length of LCS (Longest Common Subsequence) of both the strings.
// Find the minimum length of LCS of AA and BB if he optimally rearranges both the strings.

/* Input:
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer NN - denoting the length of AA and BB.
The second line of each test case contains a string AA.
The third line of each test case contains a string BB.
*/
/* Output:
For each test case, output the minimum length of LCS Chef can obtain.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{ int  tc;
    cin >> tc;

    while (tc--)
    {int n;
        cin>>n;
        
        map<char,int> m1;
        map<char,int> m2;
        
        string s1,s2;
        cin>>s1>>s2;
        
        for(int i=0;i<n;i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        int ans=0;
        for(char i='a';i<='z';i++)
        {
            int temp=min(m1[i],m2[i]);
            ans=max(ans,temp);
        }
        cout<<ans<<endl;

    }

    return 0;
}
