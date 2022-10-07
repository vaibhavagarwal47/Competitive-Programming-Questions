# Problem Name:A. Twins
# Problem Link:https://codeforces.com/contest/160/problem/A

l=int(input())
a=list(map(int,input().split(' ')))
a.sort()
t=list()
t.append(a[len(a)-1])
a.remove(a[len(a)-1])
n=1
while sum(t)<=sum(a):
    t.append(a[len(a)-1])
    a.remove(a[len(a)-1])
    n=n+1
print(n)
