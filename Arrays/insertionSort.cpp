#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array Size: ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << "\n"
             << arr[i] << "\n";
    }

    return 0;
}