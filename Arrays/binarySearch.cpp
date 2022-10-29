//
//  binarySearch.cpp
//  arrays
//
//  Created by Lovish Kumar on 22/10/22.
//

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            cout << "Found at: " << mid;
            return 0;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Not Found...!!";
    return -1;
}

int main()
{
    int n, key;
    cin >> n;

    int arr[n];
    cout << "Enter array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to found. \n";
    cin >> key;

    binarySearch(arr, n, key);
    return 0;
}
