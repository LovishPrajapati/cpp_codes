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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}