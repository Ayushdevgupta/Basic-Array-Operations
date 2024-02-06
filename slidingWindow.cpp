//Naive Sol.
// #include<iostream>
// #include<climits>
// using namespace std;
// int maxSum(int arr[], int n, int k)
// {
//     int res = INT_MIN;
//     for(int i = 0; i+k-1 < n; i++)
//     {
//         int curr = 0;
//         for(int j = 0; j < k; j++)
//         {
//             curr += arr[i+j];
//         }
//         res = max(res,curr);
//     }
//     return res;
// }





// int main()
// {
//     int arr[] = {10,5,-2,20,1};
//     int k = 3;
//     cout<<maxSum(arr,5,k);
// }

//Efficient sol.
#include<iostream>
using namespace std;
int maxSum(int arr[], int n, int k)
{
    int curr = 0;
    for(int i = 0; i < k; i++)
    {
        curr += arr[i];
    }
    int res = curr;
    for(int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i-k];
        res = max(res,curr);
    }
    return res;

}


int main()
{
    int arr[] = {10,5,-2,20,1};
    int k = 3;
    cout<<maxSum(arr,5,k);
}