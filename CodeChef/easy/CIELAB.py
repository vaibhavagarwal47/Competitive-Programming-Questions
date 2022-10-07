# Problem Code:CIELAB
# Problem Name:Ciel and A-B Problem
# Problem Link:https://www.codechef.com/problems/CIELAB


n=input().split(' ')
d=int(n[0])-int(n[1])
if(d%10==9):
    d=d-1
else:
    d=d+1
print(d)    
