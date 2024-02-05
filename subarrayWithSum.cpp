//My approach
#include<iostream>
using namespace std;
void subarraySum(int arr[], int n, int sum)
{
    for(int i = 0; i < n; i++)
    {
        int res = arr[i];
        for(int j = i + 1; j < n; j++)
        {
            res = res + arr[j];
            if(res == sum)
            {
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
}




int main()
{
    int arr[] = {2,4};
    int sum = 6;
    subarraySum(arr,2,sum);
}


//Naive Approach
// #include<iostream>
// using namespace std;
// void subarraySum(int arr[], int n, int sum)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for(int j = i; j < n-1; j++)
//         {
//             curr = curr + arr[j];
//         }
//         if(curr == sum)
//         {
//             cout<<"Yes";
//             return;
//         }
//     }
//     cout<<"No";
// }






// int main()
// {
//     int arr[] = {2,4};
//     int sum = 6;
//     subarraySum(arr,2,sum);
// }