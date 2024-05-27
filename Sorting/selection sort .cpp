#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000], i, temp, ptr, n;
    cout << "Enter number of elements :\n";
    cin >> n;
    cout << "Enter " << n << " elements:\n";

    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (i = 1; i <= n; i++)                /// [64 , 25 , 12 , 22 , 11]
    {
        int min_idx = i;                    /// index of the smallest element
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[min_idx])      /// searching the smallest element by comparing with the current element
            {
                min_idx = j;                /// stores the index of smallest element

            }                               ///  [ 64  , 25, 12, 22 , 11 (min_idx) ]
        }                                  

        temp = arr[min_idx];                /// swapping the smallest element with current element
        arr[min_idx] = arr[i];
        arr[i] = temp;                      ///  [ 11(swapped) , 25, 12, 22, 64(swapped)  ]
    }

    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
