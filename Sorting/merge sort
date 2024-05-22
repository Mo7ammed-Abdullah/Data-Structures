#include <bits/stdc++.h>
using namespace std;
                                                    // merge sort works on divide and conquer . keep dividing the code recursively like a binary tree in to two parts till one element is left .
                                                    // save the both parts in temporary right and left array . sort between both array and merge them together.


void merge(int arr[], int left, int mid, int right) // a parent array will come to this function such that its left side is sorted between them and right side is sorted between them , this happened due to recursion 
{                                                   // [27 , 38 , 10 , 43]
    int n1 = mid - left + 1;                        // length of left side of parent array                       
    int n2 = right - mid;                           // length of right side of parent array                      
                                                    
    int l[n1];                                      // make two temporary array to keep the left and right side of parent array
    int r[n2];                                      
    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];                        // assign the values from left side of parent array to the temporary left array ==  [27 , 38]
    }
    for (int i = 0; i < n2; i++)
    {
        r[i] = arr[mid + 1 + i];                     // assign the values from right side of parent array to the temporary right array == [10 , 43]
    }
    int i = 0;                                      // i pointer represents left array   == [27(i) , 38]
    int j = 0;                                      // j pointer represents right array  == [10(j) , 43]
    int k = left;                                   // k pointer represents parent array == [27(k) , 38 , 10 , 43]

    while (i < n1 && j < n2)
    {
        if (l[i] < r[j])                            
        {
            arr[k] = l[i];                          // if the element at i index is smaller then the element of j index , put it in k index of parent array
            i++;                                    // increment i
            k++;                                    // increment k
        }
        else
        {
            arr[k] = r[j];                          // if the element at j index is smaller then the element of i index , put it in k index of parent array
            j++;                                    // increment j
            k++;                                    // increment k
        }
    }
                                                    // [ 10 , 27 , 38 , 43(k)]

                                                    // After completing the sorting task by comparing left temp array and right temp array
    while (i < n1)
    {
        arr[k] = l[i];                             
        i++;                                        // if left temp array is bigger then right , assign the remaining elements of left temp array to the end of parent array
        k++;
    }
    while (j < n2)
    {
        arr[k] = r[j];                              // if right temp array is bigger then left , assign the remaining elements of right temp array to the end of parent array
        j++;
        k++;
    }
}

void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;               // find mid of the array

        mergesort(arr, left, mid);                  // keep dividing the left side of array
        mergesort(arr, mid + 1, right);             // keep dividing the right side of array

        merge(arr, left, mid, right);               // now this function will sort and merge the divided arrays
    }
}

int main()
{
    int arr[1000], i, n;
    cout << "Enter number of elements :\n";
    cin >> n;
    cout << "Enter " << n << " elements:\n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);                           /// call mergesort

    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
