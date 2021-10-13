//Insertion sort
//Time Complexity O(n^2)

#include<iostream>
using namespace std;

void insertionSort(int array[],int n){
    int i,j,v;
    for(i=0;i<n;i++){
        j=i;
        v=array[j];
        while(array[j-1]>v && j>=1){
            array[j]=array[j-1];
            j--;
        }
        array[j]=v;
    }
}
void printArray(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
         cout << array[i] << "  ";
    cout << endl;
}
int main(){
    int array[]={3,5,6,12,9};
    int array_size=sizeof(array)/sizeof(array[0]);
    cout<<"After Insertion Sort given array is "<<endl;
     printArray(array, array_size);
    insertionSort(array, array_size);
    cout << "Before Insertion Sort given array is " << endl;
    printArray(array, array_size);

    return 0;
}