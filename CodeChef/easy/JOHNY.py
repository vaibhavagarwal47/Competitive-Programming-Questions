# Problem Code:JOHNY
# Problem Name:Uncle Johny
# Problem Link:https://www.codechef.com/problems/JOHNY


test=int(input())
for i in range(test):
    n=int(input())
    songs=list(map(int, input().split()))
    #songs=input().split(' ')
    key=int(input())
    #for j in range(len(songs)):
     #   songs[j]=int(songs[j])
    no=songs[key-1]
    a=sorted(songs)
    print(a.index(no)+1)
    
