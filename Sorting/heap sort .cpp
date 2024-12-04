#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted at 'root' in an array of size 'n'
void heapify(int arr[], int n, int root)
{
    int largest = root; // Initialize largest as root
    int left = 2 * root + 1; // Left child index
    int right = 2 * root + 2; // Right child index

    // If left child exists and is greater than root
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    // If right child exists and is greater than the current largest
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not root, swap and continue heapifying
    if (largest != root)
    {
        swap(arr[root], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Function to build a max heap from the input array
void buildHeap(int arr[], int n)
{
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

// Function to perform heap sort
void heapSort(int arr[], int n)
{
    buildHeap(arr, n); // Step 1: Build a max heap

    // Extract elements one by one from the heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print the array
void printArray(int arr[], int n)
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
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size 'n'

    // Input the array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform heap sort
    heapSort(arr, n);

    cout << "The heap sort is:" << endl;
    printArray(arr, n);

    return 0;
}
