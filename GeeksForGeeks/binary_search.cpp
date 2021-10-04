// Question:- https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1/
/* 
Input 
5
1 2 3 4 5 
4
*/
/*
Output
3
*/
#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(vector<int> &a, int x)
{
  long long left = 0;
  long long right = (int)a.size() - 1;
  while (left <= right)
  {
    long long mid = left + (right - left) / 2;
    if (x == a[mid])
    {
      return mid;
    }
    if (a[mid] < x)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int n, key;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  std::cin >> key;
  std::cout << binary_search(a, key) << ' ';
}
