# Problem Code:BLACKJACK
# Problem Name:Blackjack
# Problem Link:https://www.codechef.com/submit/BLACKJACK


for _ in range(int(input())):
    a,b = map(int,input().split())
    
    if((21-(a+b))>10):
        print('-1')
    else:
        print(21-(a+b))