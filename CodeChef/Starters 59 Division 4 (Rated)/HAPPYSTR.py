# Problem Code:HAPPYSTR
# Problem Name:Chef and Happy String
# Problem Link:https://www.codechef.com/submit/HAPPYSTR

for i in range(int(input())):
    
    a=input()
    l=['a','e','i','u','o']
    x=1
    for i in range(len(a)-2):
        if a[i]  in l and a[i+1]  in l and a[i+2] in l :
            print('Happy')
            x=0
            break
    if x!=0:
        print('Sad')