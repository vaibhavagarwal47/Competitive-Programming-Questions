// Question CODE: 
// Question: Write a program to count the number of 1's in the binary representation of an integer.
/* Input:
 The only line of input contains a single integer N.
 Sample Input 1:
  9
*/
/* Output:
The only line of the output prints the total number of 1.
Sample Output 1:
2

Explanation Of Sample Input 1:
Binary Representation of 9 is 1001.
*/




#include <iostream>

using namespace std;
int countBits(int n)
{
    int i=0;
    int nCount=0;
    for(;i<(sizeof(int)*8);i++) 
    { 
        if(1&n) 
            nCount++; 
        n = n>>1;
    }
    return nCount;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
