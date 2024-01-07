#include<iostream>
using namespace std;

void rotateOne(int arr[], int n)
{
    int temp = arr[0];

    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    
    
}
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
}



int main()
{
    int arr[] = {30,5,20};
    rotateOne(arr,3);
    printArray(arr,3);
}