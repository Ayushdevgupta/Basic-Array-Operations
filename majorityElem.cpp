//Naive Sol.
// #include<iostream>
// using namespace std;

// int getMajorityElem(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int count = 1;
//         for(int j = i + 1; j < n; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if(count > n/2)
//         {
//             return i;
//         }
//     }
//     return -1;
// }





// int main()
// {
//     int arr[] = {2,2,2,1};
//     cout<<getMajorityElem(arr,4);
// }

//Another Approach
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int getMajorityElem(int arr[], int n)
// {
//     sort(arr, arr + n);
    
// }




// int main()
// {
//     int arr[] = {8,3,4,8,8};
//     cout<<getMajorityElem(arr,5);
// }


//////EfficinetApproach
//Moore's Voting Algorithm
#include<iostream>
using namespace std;
int getMajorityElem(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[res] == arr[i])
        {
            count ++;
        }
    }
    if(count <= n/2)
    {
        res = -1;
    }
    return res;

}





int main()
{
    int arr[] = {8,8,6,6,6,4,6};
    cout<<getMajorityElem(arr,7);
    return 0;
}

