#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{ 
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Function to check if the array is non-strictly increasing
bool is_increasing(const int *values, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        if (values[i] > values[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    srand(time(0));

    // Create an array of 100 random integer values
    vector<int> arr(100);
    for (int i = 0; i < 100; ++i)
    {
        arr[i] = rand() % 1000;
    }

    // Print the original array
    cout << "Original array: ";
    for (const auto &val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    // Check if the array is non-strictly increasing
    if (is_increasing(arr.data(), arr.size()))
    {
        cout << "The array is non-strictly increasing." << endl;
    }
    else
    {
        cout << "The array is not non-strictly increasing." << endl;
    }

    cout << endl;

    // Sort the array using merge sort
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (const auto &val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    // Check if the array is non-strictly increasing after sorting
    if (is_increasing(arr.data(), arr.size()))
    {
        cout << "The array is non-strictly increasing after sorting." << endl;
    }
    else
    {
        cout << "The array is not non-strictly increasing after sorting." << endl;
    }

    return 0;
}
