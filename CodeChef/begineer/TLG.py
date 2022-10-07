# Problem Code:TLG
# Problem Name:The Lead Game
# Problem Link:https://www.codechef.com/problems/TLG


n=int(input())
p2=[]
p1=[]
lead=[]
sign=[]
temp1=0
temp2=0
for i in range(n):
    l=input().split(' ')
    temp1=temp1+int(l[0])
    temp2=temp2+int(l[1])
    p1.append(temp1)
    p2.append(temp2)
    ext=temp1-temp2
    if(ext>0):
        sign.append(1)
    else:
        sign.append(2)
    diff=((ext)**2)**(1/2)
    lead.append(diff)
newlis=sorted(lead)
j=newlis[len(lead)-1]
ss=lead.index(j)
print(sign[ss],int(j))
