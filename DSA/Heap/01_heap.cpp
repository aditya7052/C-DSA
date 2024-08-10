/*
Heap -> heap is a complete binary tree that comes with a heap order property
CBT -> Every level is completely filled except the last level, here nodes are always added from left
*/

#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1; // size is increasing after calling the function
        int index = size;
        arr[index] = val;

        while (index > 1) // why 1 -> because index starting from 1
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void delelteFromHeap()
    {
        if (size == 0)
        {
            return;
        }
        // 1 -> replace first node with last
        arr[1] = arr[size];
        // 2 -> remove last element
        size--;
        // 3 -> take root to the correct position
        int
            i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
                return;
        }
    }

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left < n && arr[largest] < arr[left])
        {
            largest = left;
        }
        if (right < n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n)
    {
        
        int size = n;

        while (size > 1)
        {
            swap(arr[size], arr[1]);
            size--;
            heapify(arr, size, 1);
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    // h.insert(1);
    // h.insert(2);
    // h.insert(3);
    // h.insert(5);
    // h.insert(12);
    // h.insert(7);
    // h.insert(10);
    // h.print();
    // h.delelteFromHeap();
    // h.print();

    int n = 6;
    int arr[n] = {-1, 54, 53, 52, 50, 55};
    for (int i = n / 2; i > 0; i--)
    {
        h.heapify(arr, n, i);
    }

    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
heapify(arr,size,i){
set i as largest
leftChilde = 2i
rightChild = 2i +1

if leftChild > arr[largest]
    set leftChild as largest

if rightChild > arr[largest]
    set rightChild as largest

swap(arr)
}
*/




