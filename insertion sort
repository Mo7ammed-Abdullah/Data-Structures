#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000], i, temp, ptr, n;
    cout << "Enter number of elements :\n";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    arr[0] = -1000;                             /// so that the sorting does not go out of bound
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (i = 2; i <= n; i++)                    /// compare starts from second element 
    {
        temp = arr[i];                           /// current element is kept in temp
        ptr = i - 1;                             /// a pointer (right before temp) that will keep going backwards to compare with temp
                      
                                                /// eg: [ 1 , 23(ptr) , 10(temp/ptr+1) , 5 , 2 ]  a glimpse of the sort when i is at 3

        while (temp < arr[ptr])                 /// if current element is smaller then pointer element
        {
            arr[ptr + 1] = arr[ptr];            /// [ 1 , 23(ptr) , 23(ptr+1) , 5 , 2 ]
            ptr = ptr - 1;                      /// [ 1(ptr) , 23(ptr+1) , 23 , 5 , 2 ]
        }
        arr[ptr + 1] = temp;                    /// [ 1(ptr) , 10 (ptr+1) , 23 , 5 , 2 ]
    }
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
