#include<iostream>
using namespace std;
int getMaxProfit(int arr[], int n)
{
    int mini = arr[0];
    int profit = 0;
    for(int i = 1; i < n; i++)
    {
        int diff = arr[i] - mini;
        profit = max(profit,diff);
        mini = min(mini,arr[i]);
    }
    return profit;
}



int main()
{
    int arr[] = {1,5,3,8,12};
    cout<<getMaxProfit(arr,5);
}