// A Divide and Conquer based program for maximum subarray sum problem
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

// A utility funtion to find maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// A utility funtion to find maximum of three integers
int max(int a, int b, int c) { return max(max(a, b), c); }

// Find the maximum possible sum in arr[] auch that arr[m] is part of it
int maxCrossingSum(int arr[], int l, int m, int h)
{
    cout<<"Entering Hi"<<endl;
    cout<<l<<" "<<h<<" "<<m<<endl;
    // Include elements on left of mid.
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }
    cout<<" Left Sum "<<left_sum<<" ";

    // Include elements on right of mid
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }
    cout<<" Right Sum "<<right_sum<<" ";
    cout<<" Total "<<left_sum+right_sum<<endl;

    // Return sum of elements on left and right of mid
    return left_sum + right_sum;
}

// Returns sum of maxium sum subarray in aa[l..h]
int maxSubArraySum(int arr[], int l, int h)
{
    cout<<"Entering maxSubArraySum "<<" ";
    cout<<l<<" "<<h<<" 1st "<<endl;
   // Base Case: Only one element
   if (l == h)
     return arr[l];

   // Find middle point
   int m = (l + h)/2;
   cout<<l<<" "<<h<<" 2nd "<<m<<endl;

   /* Return maximum of following three possible cases
      a) Maximum subarray sum in left half
      b) Maximum subarray sum in right half
      c) Maximum subarray sum such that the subarray crosses the midpoint */
  return max(maxSubArraySum(arr, l, m),
              maxSubArraySum(arr, m+1, h),
              maxCrossingSum(arr, l, m, h));
     //return max(maxCrossingSum(arr, l, m, h), maxSubArraySum(arr, m+1, h), maxSubArraySum(arr, l, m));
}

/*Driver program to test maxSubArraySum*/
int main()
{
   //int arr[] = {5, -5, -5, -5, 5};
   int arr[] = {-1, -1, 5, -1, 1, -1, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int max_sum = maxSubArraySum(arr, 0, n-1);
   printf("Maximum contiguous sum is %d", max_sum);
   getchar();
   return 0;
}
