// #include<iostream>
// using namespace std;

// int maxSub(int arr[], int n)
// {
//     int res = arr[0];
//     for(int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for(int j = i; j < n; j++)
//         {
//             curr = curr + arr[j];
//             res = max(res,curr);

//         }

//     }
//     return res;
// }




// int main()
// {
//     int arr[] = {2,3,-8,7,-1,2,3};
//     cout<<maxSub(arr,7);
// }


//Efficient Approach
//Kadane's algo

#include<iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}


int main()
{
    int arr[] = {-5,1,-2,3,-1,2,-2};
    cout<<maxSum(arr,7);
}