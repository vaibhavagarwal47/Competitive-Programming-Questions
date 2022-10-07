# Problem Name:383. Ransom Note
# Problem Link:https://leetcode.com/problems/ransom-note/

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rl=[char for char in ransomNote]
        ml=[char for char in magazine]

        for i in rl:
            if i not in ml:
                return False
            else:
                ml.remove(i)
        
        return True