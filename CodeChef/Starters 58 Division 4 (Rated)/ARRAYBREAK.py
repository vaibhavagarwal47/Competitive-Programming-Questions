# Problem Code:ARRAYBREAK
# Problem Name:Break the elements
# Problem Link:https://www.codechef.com/START58D/problems/ARRAYBREAK



from itertools import count


t = int(input())
for i in range(t):
    n = int(input())
    count=0
    res = list(map(int, input().strip().split()))[:n]
    for i in range(0,len(res)):
        if res[i] % 2 != 0 :
            for i in range(0,len(res)):
                if res[i] % 2 == 0 :
                    count+=1
            break
    print(count)