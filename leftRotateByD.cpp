#include<iostream>
using namespace std;
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;
}

void leftRotate(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++)
    {
        leftRotateOne(arr,n);
    }

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
    int arr[] = {1,2,3,4,5};//{3,4,5,1,2}
    int d = 2;
    leftRotate(arr,5,d);
    printArray(arr,5);
} 