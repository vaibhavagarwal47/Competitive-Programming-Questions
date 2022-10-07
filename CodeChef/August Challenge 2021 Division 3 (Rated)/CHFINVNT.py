# Problem Code:CHIFINVT
# Problem Link:https://www.codechef.com/problems/CHIFINVT

for i in range(int(input())):
    l=list(map(int,input().split()))
    day=0
    x=l[1]%l[2]
    for j in range(l[2]):
        for i in range(l[0]):
            if i==l[1] and j==x:
                print(day+1)
                break
            elif i%l[2]==j:
                day=day+1
               
