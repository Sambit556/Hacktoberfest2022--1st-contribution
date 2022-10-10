#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int *arr, int n, int k)
{
    int start = 0, end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = ((start + end) / 2); // calculating middle position for array
        if (arr[mid] == k)
        {
            return mid; // if target found we return it's index
        }
        else if (arr[mid] > k) // as arr[mid]>k i.e k may be found between start and mid-1
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // as arr[mid]>k i.e k may be found between mid+1 and end
        }
    }
    return -1; // if target not found we return -1;
}

int main()
{
    int n; // Length of the array
    cout << "Enter length of array : ";
    cin >> n;

    cout << "Enter array elements : ";
    int *arr = new int[n]; // creating array using pointers
                           // we can also use --> int arr[n]
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking array element inputs
    }

    sort(arr, arr + n); // sorting array
                        // as binary search works only for sorted array

    int target; // taking target element input which we need to search
    cout << "Enter target element : ";
    cin >> target;

    int ans = binarySearch(arr, n, target); // function call for binary search

    if (ans != -1) // if function returns true --> target found
    {
        cout << "Target Found at index(in sorted array) : " << ans << "\n";
    }
    else // if function returns false --> target not found
    {
        cout << "Target Not Found\n";
    }
    return 0;
}