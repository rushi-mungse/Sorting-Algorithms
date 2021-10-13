//Selection sort
//Time complexity O(n^2)
#include <iostream>
using namespace std;

void selectionSort(int array[], int const array_size)
{
    for (int i = 0; i < array_size - 1; i++)
    {
        for (int j = i; j < array_size; j++)
        {
            if (array[i] >= array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
         cout << array[i] << "  ";
    cout << endl;
}

int main()
{
    int array[] = {3, 5, 34, 8, 4, 9};
    auto array_size = sizeof(array) / sizeof(array[0]);
    cout << "After Selection Sort given array is " << endl;
    printArray(array, array_size);
    selectionSort(array, array_size);
    cout << "Before Selection Sort given array is " << endl;
    printArray(array, array_size);
    return 0;
}