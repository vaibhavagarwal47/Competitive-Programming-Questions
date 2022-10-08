# Problem Code:DNASTRAND
# Problem Name:Complementary Strand in a DNA
# Problem Link:https://www.codechef.com/submit/DNASTRAND

for _ in range(int(input())):
    n=int(input())
    s=list(input()[:n])
    e=''
    d={'A':'T','T':'A','C':'G','G':'C'}
    for i in s:
        e=e+d[i]
    print(e)