# Problem Code:FCTRL
# Problem Name:Factorial
# Problem Link:https://www.codechef.com/problems/FCTRL


t=int(input())
for i in range(t):
    n=int(input())
    i=0
    p=1
    while (n//(5**p)):
        i=i+n//(5**p)
        p=p+1
    print(i)
