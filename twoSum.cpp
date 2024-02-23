//Naive Approach
// #include<iostream>
// using namespace std;
// int getTwoSum(int arr[], int target, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for(int j  = i+1; j < n; j++)
//         {
//             sum += arr[i] + arr[j];
//             if(sum == target)
//             {
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     return -1;
// }




// int main()
// {
//     int arr[] = {3,3};
//     int  target = 6;
//     getTwoSum(arr,target,2);
    
// }

//Efficient sol
#include<iostream>
using namespace std;
int getTwoSum(int arr[], int target, int n)
{
    int res = 0;
    for(int i = 1; i < n; i++)
    {
        res = arr[i-1] + arr[i];
        if(res == target)
        {
         cout<<i-1<<" "<<i;
        }
        
    }
    return -1;
}




int main()
{
    int arr[] = {2,7,11,15};
    int  target = 18;
    getTwoSum(arr,target,4);
    
}