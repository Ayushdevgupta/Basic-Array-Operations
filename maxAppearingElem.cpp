#include<iostream>
using namespace std;
int maxAppear(int left[], int right[], int n)
{
    int freq[100] = {0};
    for(int i = 0; i < n; i++)
    {
        for(int j = left[i]; j <= right[i]; j++)
        {
            freq[j] += 1;
        }
    }
    int res = 0;
    for(int i = 1; i < 100; i++)
    {
        if(freq[i] > freq[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int left[] = {1,2,5,15};
    int right[] = {5,8,7,18};
    cout<<maxAppear(left,right,4);
}