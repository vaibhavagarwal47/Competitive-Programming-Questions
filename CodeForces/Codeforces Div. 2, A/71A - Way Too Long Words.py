# Problem Name:A. Way Too Long Words
# Problem Link:https://codeforces.com/contest/71/problem/A

for i in range(int(input())):
    p=input()
    if len(p)>10:
        print(p[0]+str(len(p)-2)+p[len(p)-1])
    else:
        print(p)
        
