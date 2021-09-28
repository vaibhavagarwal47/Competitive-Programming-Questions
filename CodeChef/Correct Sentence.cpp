// Question CODE: CORTSENT
// Question: https://www.codechef.com/START4C/problems/CORTSENT
/* Input:
3
1 aN
2 ab NO
3 A N D
*/
/* Output:
NO
YES
NO
*/

#include <bits/stdc++.h>
#define l long
#define ll long long 
using namespace std;

set <int> s;
int x=0;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool nigg = true;
    int t;
    cin >> t;
    while(t--){
        nigg=true;
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            string s;
            cin >> s;
            bool capslo=false,small=false;

            if(nigg==true){
            for(int i=0;i<s.length();i++){
                if(s[i] >= 'a' && s[i] <= 'z'){
                    if(s[i] >= 'n' && s[i] <= 'z')
                    {
                        nigg = false;
                        break;
                    }
                    else
                    {
                        small=true;
                        if(capslo == true){
                            nigg=false;
                            break;
                        }
                    }
                }

                if(s[i] >= 'A' && s[i] <= 'Z'){
                    if(s[i] <= 'M')
                    {
                        nigg =false;
                        break;
                    }
                    else
                    {
                        capslo=true;
                        if(small == true){
                            nigg=false;
                            break;
                        }
                    }
                }
            }
        }
        }
            if(nigg) cout << "YES";
            else cout << "NO";
        cout << "\n";

    }

    return 0;
}