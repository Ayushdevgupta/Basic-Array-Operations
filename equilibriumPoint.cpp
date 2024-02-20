//Naive Approach
// #include<iostream>
// using namespace std;
// bool ePoint(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int ls = 0, rs = 0;
//         for(int j = 0; j < i; j++)
//         {
//             ls += arr[j];
//         }
//         for(int k = i+1; k < n; k++)
//         {
//             rs += arr[k];
//         }
//         if(ls == rs)
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int arr[] = {3,4,8,-9,9,7};
//     cout<<ePoint(arr,6);
// }

//Efficient Approach
//Time complexity - O(n)
//Space complexity - O(n)

// #include<iostream>
// using namespace std;
// int hasEquilibrium(int lSum[], int rSum[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         if(lSum[i] == rSum[i])
//         {
//             return true;
//             break;
//         }
//     }
//     return false;
// }





// int main()
// {
//     int arr[] = {4,2,-2};
//     int n = 3;
//     int lSum[n];
//     lSum[0] = 0;
//     for(int i = 1; i < n; i++)
//     {
//         lSum[i] = lSum[i-1] + arr[i-1];
//     }
//     int rSum[n];
//     rSum[n-1] = 0;
//     for(int j = n-2; j >= 0; j--)
//     {
//         rSum[j] = rSum[j+1] + arr[j+1];
//     }
//     cout<<hasEquilibrium(lSum,rSum,n);
// }

//Efficient Approach
//Time complexity - O(n)
//Space complexity - O(1)
#include<iostream>
using namespace std;

bool ePoint(int arr[], int n)
{
    int rs = 0;
    for(int i = 0; i < n; i++)
    {
        rs += arr[i];
    }
    int ls = 0;
    for(int i = 0; i < n; i++)
    {
        rs -= arr[i];
        if(ls == rs)
        {
            return true;
        }
        ls += arr[i];
    }
    return false;
}


int main()
{
    int arr[] = {3,4,8,-9,9,7};
    cout<<ePoint(arr,6);
}