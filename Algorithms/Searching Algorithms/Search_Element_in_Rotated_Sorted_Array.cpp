// Search an element in sorted and rotated array
//We can use Binary Search 
#include <bits/stdc++.h>
using namespace std;

// Returns index of key in arr[l..h] if key is present, otherwise returns -1
int search(int arr[], int l, int h, int key)
{
      if (l > h)
        return -1;

      int mid = (l + h) / 2;
      if (arr[mid] == key)
        return mid;

      if (arr[l] <= arr[mid]) {
        if (key >= arr[l] && key <= arr[mid])
          return search(arr, l, mid - 1, key);
        return search(arr, mid + 1, h, key);
      }

      if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid + 1, h, key);

      return search(arr, l, mid - 1, key);
}

int main()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++) cin>>arr[i];
      int key;
      cin>>key;
      int i = search(arr, 0, n - 1, key);

      if (i != -1)
        cout << "Index: " << i << endl;
      else
        cout << "Key not found";
}

//Time Complexity: O(log n)
