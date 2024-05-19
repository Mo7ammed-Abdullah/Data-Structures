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

void deleteroot(int arr[], int &n)                          // root is always deleted when delete is called in heap
{
    int last_element = arr[n - 1];

    arr[0] = last_element;                                   // so replace root with last element

    n = n - 1;                                               // reduce size of array by 1

    heapify(arr, n, 0);                                     // start heapify from root to create max heap of the remaining elemnts
}

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
    cout << "The maxheap elements before deletion" << endl;
    print(arr, n);
    deleteroot(arr, n);                                     //  send address of n as size is reduced by one after each deletion
    cout << "The maxheap elements after deletion" << endl;
    print(arr, n);
    return 0;
}
