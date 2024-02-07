//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define r0 return 0


#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, N, largest);
    }
}

void makeHeap(int arr[], int N)
{

    for (int i = (N / 2) - 1; i >= 0; i--)
    {
        heapify(arr, N, i);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

void printHeap(int arr[], int N)
{
    cout << "Heap sort :";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << el;
}

int main()
{

    optimize();
    int arr[] = {4, 8, 9, 10, 2, 3, 5, 7, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    makeHeap(arr, N);
    printHeap(arr, N);
    return 0;
}

/*

4 8 9 10 2 3 5 7 6

ans: 2 3 4 5 6 7 8 9 10 
*/


//*minheap sort

/* // BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

void heapify(int arr[], int N, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] < arr[smallest])
        smallest = left;
    if (right < N && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, N, smallest);
    }
}

void minHeapSort(int arr[], int N)
{

    for (int i = (N / 2) - 1; i >= 0; i--)
    {
        heapify(arr, N, i);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int N)
{
    cout << "Min heap sorted array in descending order: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << el;
}

int main()
{

    optimize() int arr[] = {4, 8, 9, 10, 2, 3, 5, 7, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    minHeapSort(arr, N);
    printArray(arr, N);
    return 0;
}
 */