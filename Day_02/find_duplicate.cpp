/* You are given an array of integers 'ARR' containing N elements. 
Each integer is in the range [1, N-1], with exactly one element repeated in the array.

Your task is to find the duplicate element. 
The duplicate element may be repeated more than twice in the error, 
but there will be exactly one element that is repeated in the array. */

#include <iostream>
#include <algorithm>
using namespace std;

int findDuplicate(int arr[], int size)
{

    //Sorting the array
    sort(arr, arr + size);

    // Traverse through the array to check if two consecutive elements are equal.
    for (int i = 0; i < size - 1; i++)
    {

        // Duplicate element found.
        if (arr[i] == arr[i + 1])
        {

            // Return the duplicate element.
            return arr[i];
        }
    }
    return -1;
}


int main()
{

    // N=5 so array= [1,4]
    int arr[5] = {1, 3, 4, 2, 2};
    int ans = findDuplicate(arr, 5);
    cout << "The duplicate element present is " << ans;
}