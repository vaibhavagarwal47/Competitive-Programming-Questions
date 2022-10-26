/*
Given an integer n. Return the nth row of the following look-and-say pattern.
1
11
21
1211
111221
Look-and-Say Pattern:

To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
1211 is read off as "one 1, one 2, then two 1s" or 111221.
111221 is read off as "three 1s, two 2s, then one 1" or 312211.
Example 1:

Input:
n = 5
Output: 111221
Explanation: The 5th row of the given pattern
will be 111221.
Example 2:

Input:
n = 3
Output: 21
Explanation: The 3rd row of the given pattern
will be 21.
*/

#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n){
    if(n==1){
        return "1";
    }
    if(n==2){
        return "11";
    }
    string s="11";

         for(int i=3;i<=n;i++){
            string t="";
             s=s+'&';
             int c=1;
             for(int j=1;j<s.length();j++){
                 if(s[j]!=s[j-1]){
                     t=t+ to_string(c);
                     t=t+s[j-1];
                     c=1;
                 }
                 else
                  c++;
                 
             }
             s=t;
         }
         return s;
    }   
int main(){
    return 0;
}