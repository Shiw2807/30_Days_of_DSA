#include <iostream>
using namespace std;

// Function defined for linear search

bool search(int arr[], int s, int key)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[5] = {2, 5, 7, 3, 9};
    int key;

    // Taking input from user for the element to be searched
    cin >> key;

    bool found = search(arr, 5, key);

    // Checking if element present
    if (found)
    {
        cout << "Element found!";
    }
    else
    {
        cout << "No such element present";
    }

    return 0;
}