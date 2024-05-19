#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int root)
{
    int temp;
    int largest = root;
    int l = 2 * root + 1;
    int r = 2 * root + 2;

    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != root)
    {
        temp = arr[largest];
        arr[largest] = arr[root];
        arr[root] = temp;

        heapify(arr, n, largest);
    }
}

void buildheap(int arr[], int n)
{
    int strt_idx = (n / 2) - 1;

    for (int i = strt_idx; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void sort_heap(int arr[], int n)
{
    int temp;
    for (int i = n - 1; i > 0; i--)                 // start from i'th element  === [40 30 15 10 20]
    {                                               //                                            i
        temp = arr[i];
        arr[i] = arr[0];                            // swap i'th element with root. as root is max . now i'th element is sorted ==== [20 30 15 10   | 40]
        arr[0] = temp;

        heapify(arr, i, 0);                         // now i=i-1 which means last element is excluded . heapify the remaining elements so that max is at root === [20 30 15 10   | 40]
    }                                               //                                                                                                                       i
}                                                   // after heapification [30 20 15 10   | 40]
                                                    //                                i
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in to heap:";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    buildheap(arr, n);
    sort_heap(arr, n);
    cout << "The heap sort is:" << endl;
    print(arr, n);

    return 0;
}
