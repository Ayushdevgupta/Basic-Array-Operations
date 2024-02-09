//Naive Approach
// #include<iostream>
// using namespace std;
// int getSum(int l, int r, int arr[])
// {
//     int res = 0;
//     for(int i = l; i <= r; i++)
//     {
//         res += arr[i];
//         return res;
//     }
// }


// int main()
// {
//     int arr[] = {2,8,3,9,6,5,4};
//     cout<<getSum(1,3,arr);
// }

//Efficient Approach
#include<iostream>
using namespace std;

int arr[] = {2, 8, 3, 9, 6, 5, 4};
int n = 7;
int pr[7];

int getSum(int l, int r)
{
    if(l == 0)
    {
        return pr[r];
    }
    return pr[r] - pr[l-1];
}

int main()
{
    pr[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        pr[i] = pr[i-1] + arr[i];
    }

    // Corrected function call
    cout << getSum(2, 6);

    return 0;
}
