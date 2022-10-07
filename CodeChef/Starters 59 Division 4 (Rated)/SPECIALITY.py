# Problem Code:SPECIALITY
# Problem Name:Speciality
# Problem Link:https://www.codechef.com/submit/SPECIALITY

for i in range(int(input())):
    
    s,t,e=map(int,input().split())
    if s>t and s>e:
        print('Setter')
    elif t>s and t>e:
        print('Tester')
    else:
        print('Editorialist')


