//Naive Approach
// #include<iostream>
// using namespace std;
// void subarraySum(int arr[], int n, int sum)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int res = 0;
//         for(int j = i; j < n; j++)
//         {
//             res = res + arr[j];
//             if(res == sum)
//             {
//                 cout<<"Yes";
//                 return;
//             }
//         }
//     }
//     cout<<"No";
// }

// int main()
// {
//     int arr[] = {1,2,3};
//     int sum = 5;
//     subarraySum(arr,3,sum);
// }

//Efficient Approach
#include<iostream>
using namespace std;
int subarraySum(int arr[], int n, int sum)
{
    int s = 0;
    int curr = 0;
    for(int i = 0; i < n; i++)
    {
        curr += arr[i];
        while(sum<curr)
        {
            curr -= arr[s];
        }
        if(curr == sum)
        {
            return true;
        }
    }
    return false;
}



int main()
{
    int arr[] = {1,2,3};
    int sum = 5;
    cout<<subarraySum(arr,3,sum);
}


