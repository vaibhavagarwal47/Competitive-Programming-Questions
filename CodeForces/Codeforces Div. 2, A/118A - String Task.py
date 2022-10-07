# Problem Name:A. String Task
# Problem Link:https://codeforces.com/contest/118/problem/A

b=input()
a=list(b.lower())
p='abcdefghiklmnopqrstvxABCDEFGHIKLMNOPQRSTVX'
x=list()
for i in a:
    x.append(i)
for i in a:
    if i in 'aoyeui':
        x.remove(i)
t=''
for i in x:
    t=t+'.'+i
print(t)
