// #include<iostream>
// using namespace std;

// int maxProfit(int price[], int start, int end)
// {
//     if(end <= start)
//     return 0;
// int profit = 0;
// for(int i = start; i < end; i++)
// {
//     for(int j = i + 1; j <= end; j++)
//     {
//         if(price[j] > price[i])
//         {
//             int curr_Profit = price[j] - price[i] + maxProfit(price, start, i-1) + maxProfit(price, j + 1, end);
//             profit = max(profit, curr_Profit);
//         }
//     }
// }
// return profit;
// }

// int main()
// {
//     int price[] = {1,5,3,8,12};
//     int result = maxProfit(price,0,4);
//     cout<<result;
// }

//Efficient Approach
#include<iostream>
using namespace std;
int maxProfit(int arr[], int n)
{
    int profit = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[i - 1])
        {
            profit = profit + (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}



int main()
{
    int arr[] = {1,5,3,8,12};
    int res = maxProfit(arr,5);
    cout<<res;
}

