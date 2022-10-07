# Problem Code:MAXTHEMIN
# Problem Name:Maximize the Minimum
# Problem Link:https://www.codechef.com/problems/MAXTHEMIN

for i in range(int(input())):
   p=list(map(int,input().split(' ')))
   n,k=p[0],p[1]
   arr=list(map(int,input().split(' ')))
   temp=n-k
   arr.sort()
   if temp <=1:
        print(arr[-1])
   else:
       print(arr[k])
       
