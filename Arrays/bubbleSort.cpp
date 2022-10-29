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

    int counter = 1;

    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << "\n"
             << arr[i] << "\n";
    }

    return 0;
}