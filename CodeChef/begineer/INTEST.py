# Problem Code:INTEST
# Problem Name:Enormous Input Test
# Problem Link:https://www.codechef.com/problems/INTEST


nom=input()
l=nom.split(' ')
n=int(l[0])
k=int(l[1])
p=0
a=0
for i in range(n):
    p=int(input())
    if(p%k==0):
        a=a+1
print(a)
