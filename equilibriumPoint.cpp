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