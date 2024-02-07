#include<iostream>
using namespace std;
int getSum(int l, int r, int arr[])
{
    int res = 0;
    for(int i = l; i <= r; i++)
    {
        res += arr[i];
        return res;
    }
}


int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    cout<<getSum(1,3,arr);
}