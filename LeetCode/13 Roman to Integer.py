# Problem Name:13. Roman to Integer
# Problem Link:https://leetcode.com/problems/roman-to-integer/

class Solution(object):
    def romanToInt(self, s):
        q=s
        sp=['IV','IX','XL','XC','CD','CM']
        it=[4,9,40,90,400,900]
        rom=['I','V','X','L','C','D','M']
        inte=[1,5,10,50,100,500,1000]
        out=0 
        for i in sp:
          if i in q:
            out+=it[sp.index(i)]
            temp=q.index(i)
            q=q[:temp]+q[temp+2:]
        a=list(q)    
        for i in a:
          out+=inte[rom.index(i)]
        return out
