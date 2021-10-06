//Question link-https://www.hackerrank.com/challenges/variable-sized-arrays/problem
/*Input 
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3*/

/*Output
5
9*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    int i=0,j=0,k=1;
    cin>>n>>q;
    int s, t;
    
    vector<int> a[n];
    for (i=0;i<n  ; i++) {
        cin>>s;
        for (j=0; j<s; j++) {
            cin>>t;
        a[i].push_back(t);
        }
    }
    int y,z;
   
    for (k=1; k<=q; k++) {
        cin>>y>>z;
    cout<< a[y][z]<< endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
