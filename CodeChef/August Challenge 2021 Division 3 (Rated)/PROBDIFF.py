# Problem Code:PROBDIFF
# Problem Name:Problem Difficulties
# Problem Link:https://www.codechef.com/problems/PROBDIFF


for i in range(int(input())):
    l=[]
    l=list(map(int,input().split()))
    if(len(set(l))==4 or len(set(l))==3):
        print(2)
    elif(len(set(l))==2 ):
        if(l.count(l[0])==2):
            print(2)
        else:
            print(1)
    elif(len(set(l))==1):
        print(0)
        
