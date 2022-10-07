# Problem Name:A. Petya and Strings
# Problem Link:https://codeforces.com/contest/112/problem/A

a=input()
b=input()
a=a.lower()
b=b.lower()
if a>b:
    print("1")
elif b>a :
    print('-1')
elif a==b:
    print(0)
