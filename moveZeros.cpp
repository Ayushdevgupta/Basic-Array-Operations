#include<iostream>
using namespace std;

void moveToEnd(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] != 0)
                {
                    swap(arr[j],arr[i]);
                }
            }
        }
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
    int arr[] = {10,5,0,0,8,0,9,0};
    moveToEnd(arr,8);
    printArray(arr,8);
}