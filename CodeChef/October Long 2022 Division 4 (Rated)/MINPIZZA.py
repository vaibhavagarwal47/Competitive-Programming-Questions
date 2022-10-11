# Problem Code:MINPIZZA
# Problem Name:Minimum Pizzas
# Problem Link:https://www.codechef.com/submit/MINPIZZA


import math
for _ in range(int(input())):
    n,x=map(int,input().split())
    print(math.ceil((n*x)/4))