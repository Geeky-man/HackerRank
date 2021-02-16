// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, arr[50], min, max;
//     int numberOfSwaps = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 numberOfSwaps++;
//             }
//         }
//         // if (numberOfSwaps == 0)
//         // {
//         //     cout << "Array is sorted\n";
//         //     break;
//         // }
//     }
//     cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;

//     min = max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (max > arr[i])
//             max = arr[i];
//     }
//     cout << "First Element: " << max << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (min < arr[i])
//             min = arr[i];
//     }
//     cout << "Last Element: " << min << endl;
// }

#include <iostream>

using namespace std;

int main()
{

    int i, j, n, temp, count = 0, Swaps;
    cin >> n;
    int array[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = n - 1; i > 0; i--)
    {
        Swaps = 0;
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                Swaps++;
                count++;
            }
        }
        if (Swaps == 0)
        {
            break;
        }
    }
    cout << "Array is sorted in " << count << " swaps.\n";
    cout << "First Element: " << array[0] << endl;
    cout << "Last Element: " << array[n - 1] << endl;
    return 0;
}