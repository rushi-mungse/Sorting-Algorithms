//Bubble Sort
//Time complexity O(n^2)

#include<iostream>
using namespace std;

void bubbleSort(int array[],int const array_size){
    int n=array_size-1;
    int i=0;
    while(i<n-i){
        for(int j=0;j<n-i;j++){
            if(array[j]>array[j+1]){
                int temp =array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        i++;
    }
}
void printArray(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
         cout << array[i] << "  ";
    cout << endl;
}

int main(){
    int array[] = {3, 5, 34, 8, 4, 9};
    auto array_size = sizeof(array) / sizeof(array[0]);
    cout << "After Selection Sort given array is " << endl;
    printArray(array, array_size);
    bubbleSort(array, array_size);
    cout << "Before Selection Sort given array is " << endl;
    printArray(array, array_size);
    return 0;
}