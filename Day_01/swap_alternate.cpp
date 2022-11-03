#include <iostream>
using namespace std;

int alternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arr[6] = {2, 4, 7, 9, 1,3};

    // Printing array before swapping
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<< " ";
    }

    alternate(arr, 6);

    cout<<endl;

    // Printing arrage after swapping alternatives
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}