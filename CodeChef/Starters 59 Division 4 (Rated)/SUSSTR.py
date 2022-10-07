# Problem Code:SUSSTR
# Problem Name:Suspense String
# Problem Link:https://www.codechef.com/submit/SUSSTR

for i in range(int(input())):
    n=int(input())
    s=input()
    t=''
    for i in range(n):
     if i%2==0:
        x=s[0]
        s=s[1:]
        if x=='0' :
            t= x+t
        else:
            t=t+x
        #print('al',t)
        
     else:
         x=s[-1]
         s=s[:-1]
         if x=='0' :
            t= t+x
         else:
            t=x+t
         #print('bo',t)
    print(t)

