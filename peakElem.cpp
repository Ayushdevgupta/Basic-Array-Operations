#include<iostream>
using namespace std;
int getPeakElem(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if((i==0 || arr[i] > arr[i-1]) && (i == n-1 || arr[i] > arr[i+1]))
        {
            return i;
        }
    }
}







int main()
{
    int arr[] = {1,2,3};
    cout<<getPeakElem(arr,3);
}
