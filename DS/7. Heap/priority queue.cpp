// C++ code to implement priority-queue
// using array implementation of
// binary heap

#include <bits/stdc++.h>
using namespace std;

int H[50];
int Size = -1;


int parent(int i)
{

	return (i - 1) / 2;
}

int leftChild(int i)
{

	return ((2 * i) + 1);
}

int rightChild(int i)
{

	return ((2 * i) + 2);
}

// Function to shift up the node in order
// to maintain the heap property
void shiftUp(int i)
{
	while (i > 0 && H[parent(i)] < H[i]) {

		// Swap parent and current node
		swap(H[parent(i)], H[i]);

		// Update i to parent of i
		i = parent(i);
	}
}

// Function to shift down the node in
// order to maintain the heap property
void shiftDown(int i)
{
	int maxIndex = i;

	// Left Child
	int l = leftChild(i);

	if (l <= Size && H[l] > H[maxIndex]) {
		maxIndex = l;
	}

	// Right Child
	int r = rightChild(i);

	if (r <= Size && H[r] > H[maxIndex]) {
		maxIndex = r;
	}

	// If i not same as maxIndex
	if (i != maxIndex) {
		swap(H[i], H[maxIndex]);
		shiftDown(maxIndex);
	}
}

// Function to insert a new element
// in the Binary Heap
void insert(int p)
{
	Size = Size + 1;
	H[Size] = p;

	// Shift Up to maintain heap property
	shiftUp(Size);
}

// Function to extract the element with
// maximum priority
int extractMax()
{
	int result = H[0];

	// Replace the value at the root
	// with the last leaf
	H[0] = H[Size];
	Size = Size - 1;

	// Shift down the replaced element
	// to maintain the heap property
	shiftDown(0);
	return result;
}

// Function to change the priority
// of an element
void changePriority(int i, int p)
{
	int oldp = H[i];
	H[i] = p;

	if (p > oldp) {
		shiftUp(i);
	}
	else {
		shiftDown(i);
	}
}

// Function to get value of the current
// maximum element
int getMax()
{

	return H[0];
}

// Function to remove the element
// located at given index
void remove(int i)
{
	H[i] = getMax() + 1;

	// Shift the node to the root
	// of the heap
	shiftUp(i);

	// Extract the node
	extractMax();
}

int main()
{

    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);


    // Priority queue before extracting max
    cout << "Priority Queue : ";
    for (int i = 0; i <= Size; i++)
    {
        cout << H[i] << " ";
    }
    cout << "\n";

    // Node with maximum priority
    cout << "Node with maximum priority : " << extractMax() << "\n";

    // Priority queue after extracting max
    cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= Size; i++)
    {
        cout << H[i] << " ";
    }
    cout << "\n";

    // Change the priority of element
    // present at index 2 to 49
    changePriority(2, 49);

    cout << "Priority queue after priority change : ";
    for (int i = 0; i <= Size; i++)
    {
        cout << H[i] << " ";
    }
    cout << "\n";

    // Remove element at index 3
    remove(3);
    cout << "Priority queue after removing the element :";
    for (int i = 0; i <= Size; i++)
    {
        cout << H[i] << " ";
    }

    return 0;
}
