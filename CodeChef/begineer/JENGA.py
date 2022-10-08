# Problem Code:JENGA
# Problem Name:Jenga Night
# Problem Link:https://www.codechef.com/submit/JENGA


for _ in range(int(input())):
    n,x=map(int,input().split())
    if(n==x):
        print("yes")
    elif(x%n==0):
        print("yes")
    else:
        print("no")