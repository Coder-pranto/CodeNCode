#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define el '\n'

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int idx_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[idx_min] > arr[j])
            {
                idx_min = j;
            }
        }
        if (idx_min != i)
        {
            swap(arr[i], arr[idx_min]);
        }
    }

    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
       cout<<endl;
}

void Bubble_Sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}



void insertion_Sort(int arr[], int n)
{
    int temp;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//* merge sort start
void merging(int a[],int left,int mid, int right)
{
    int index_a, index_l, index_r;

    int size_left, size_right;

    size_left = mid - left+1;
    size_right = right - mid;

    int l[size_left], r[size_right];

    for(int i=0; i<size_left; i++)
        {
            l[i] = a[left+i];
        }

    for(int i =0; i< size_right; i++)
        {
            r[i] = a[mid+1+i];
        }
    index_l =0;
    index_r =0;
    for(index_a = left; index_l<size_left && index_r <size_right; index_a++)
        {
            if(l[index_l] < r[index_r])
                {
                    a[index_a] = l[index_l];
                    index_l ++;
                }
            else
                {
                    a[index_a] = r[index_r];
                    index_r ++;
                }
        }
    while(index_l < size_left)
        {
            a[index_a] = l[index_l];
            index_l ++;
            index_a ++;
        }
    while(index_r < size_right)
        {
            a[index_a] = r[index_r];
            index_r ++;
            index_a ++;
        }
}


void merge_sort(int a[],int left, int right)
{
    if(left>= right)
        return ;

    int mid = left+ (right-left)/2 ;//avoid integer overflow

    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);

    merging(a,left,mid,right);
}
//* merge sort end

//* Quick sort start
int partition(int a[], int low, int high)
{
    int i = low - 1;
    int pivot = a[high];
    for ( int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i += 1;
            swap(a[j], a[i]);
        }
    }

    swap(a[i+1], a[high]);

    return i+1;
}

void quick_sort(int a[], int low, int high)
{
    if (low >= high)
        return;
    int p;
    p = partition(a, low, high);

    quick_sort(a, low, p - 1);
    quick_sort(a, p + 1, high);
}

//* Quick sort end

//* Heap sort start
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

    for (int i = N - 1; i >= 0; i--)//sort er kaj kortese
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);// heap array er size ek ek kore kom kore pathano hocce
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

//* Heap sort end


int main()
{
    int arr[] = {10, 5, 2, 8, 7};
    int n = *(&arr + 1) - arr;

    selection_sort(arr, n);
    Bubble_Sort(arr, n);
    insertion_Sort(arr, n);

    int a[] = {1, 5, 6, 3, 11, 8, 7, 2, 9};
    int nn = *(&a + 1) - a;
    merge_sort(a, 0, nn - 1);
    for (int i = 0; i < nn; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int ar[] = {1, 5, 6, 3, 11, 8, 7, 2, 9};
    int m = *(&ar + 1) - ar;
    quick_sort(ar, 0, m - 1);

    for (int i = 0; i < m; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;


    int arr2[] = {4, 8, 9, 10, 2, 3, 5, 7, 6};
    int N = sizeof(arr2) / sizeof(arr2[0]);

    makeHeap(arr2, N);
    printHeap(arr2, N);

    return 0;
}