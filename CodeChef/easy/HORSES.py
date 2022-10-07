# Problem Code:HORSES
# Problem Name:Racing Horses
# Problem Link:https://www.codechef.com/problems/HORSES


test=int(input())
if 1<=test<=10:
  for i in range(test):
    p=int(input())
    if 2<=p<=5000:
      a=input().split(' ')
      for i in range(0,len(a)):
          a[i] = int(a[i])
      a.sort()
      #print(a)
      diff=1000000001
      for j in range(1,p):
              temp=int(a[j])-int(a[j-1])
              if temp<diff:
                  diff=temp
    print(diff)
                  
'''
(this was pervious code in which time limit is exceeding)
test=int(input())
if 1<=test<=10:
  for i in range(test):
    p=int(input())
    if 2<=p<=5000:
      a=input().split(' ')
      if 1<=len(a)<=1000000000:
        diff=99999999
        for j in range(p):
          for k in range(j+1,p):
            temp= (int(a[j])-int(a[k]))**2
            if temp < diff:
                diff=temp
    print(int(diff**(1/2)))    '''
