
/* Given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
Find and return that number that is unique in the array/list.

Note: Unique element is always present in the array/list according to the given condition. */

#include <iostream>
using namespace std;

int find_unique(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    /*  here n=2m+1;
     where m=3 so n=7 */
    int arr[7] = {3, 7, 2, 2, 3, 7, 1};
    int ans = find_unique(arr, 7);
    cout << "The element which is unique is " << ans;
}