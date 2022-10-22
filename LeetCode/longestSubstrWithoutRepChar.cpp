/*003.
Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    if (s.size() == 0)
    {
        return 0;
    }

    unordered_map<char, int> maps;

    int ans = INT_MIN, i = 0, j = 0;

    while (j < s.size())
    {

        maps[s[j]]++;

        if (maps[s[j]] > 1)
        {
            char temp = s[j];
            while (maps[temp] > 1)
            {
                maps[s[i]]--;
                i++;
            }
            j++;
        }
        else
        {
            ans = max(ans, j - i + 1);
            j++;
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << "Longest substring without repeating character is : " << lengthOfLongestSubstring(s) << endl;
}