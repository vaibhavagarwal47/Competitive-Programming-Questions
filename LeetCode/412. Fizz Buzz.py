# Problem Name:412. Fizz Buzz
# Problem Link:https://leetcode.com/problems/fizz-buzz/

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        l=list()
        for i in range(n):
            if (i+1) % 3==0 and (i+1) % 5==0:
                l.append("FizzBuzz") 
            elif (i+1) % 3==0:
                l.append("Fizz")
            elif (i+1) % 5==0:
                l.append("Buzz")
            else:
                l.append(str(i+1))
        return l 