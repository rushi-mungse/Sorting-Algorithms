//Insertion Sort 
//Time complexity O(n)

#include <iostream>
using namespace std;

int main()
{
    int array[] = {4, 2, 6,3, 1, 5};
    int array_size = sizeof(array) / sizeof(array[0]);
    int i = 0;
    while (i < array_size)
    {
        int index = array[i] - 1;
        if (array[i] != array[index])
        {
            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < array_size; i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}