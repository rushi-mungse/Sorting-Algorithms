//Merge Sort
//Time complexity O(n^2)

#include <iostream>
using namespace std;

void merge(int array[], int const begin, int const mid, int const end)
{
    auto subArrayOne = mid - begin + 1,
         subArrayTwo = end - mid;
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];

    for (auto i = 0; i < subArrayOne; i++)
    {
        leftArray[i] = array[begin + i];
    }
    for (auto i = 0; i < subArrayTwo; i++)
    {
        rightArray[i] = array[mid + 1 + i];
    }

    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0, indexOfMove = begin;

    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] > rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMove] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        else
        {
            array[indexOfMove] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        indexOfMove++;
    }
    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMove] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMove++;
    }
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMove] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMove++;
    }
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main()
{
    int array[] = {3, 56, 7, 3, 7};
    auto array_size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, array_size - 1);

    cout << "Sorted array is: " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}