//Naive Approach
// #include<iostream>
// using namespace std;
// int getSum(int arr[],int s, int e)
// {
//     int res = 0;
//     for(int i = s; i <= e; i++)
//     {
//         res += arr[i];
//     }
//     return res;
// }


// int main()
// {
//     int arr[] = {2,8,3,9,6,5,4};
//     cout<<getSum(arr,0,2);
// }

//Efficient Approach
#include <iostream>
using namespace std;

int getSum(int pSum[], int l, int r){
    if(l==0)
    {
        return pSum[r];
    }
    return pSum[r]-pSum[l-1];
}

int main(){
    int arr[]={3,1,4,2,2,1};
    int n=6;
    int pSum[n];
    pSum[0] = arr[0];
    for(int i=1; i<n; i++)
        pSum[i] = pSum[i-1]+ arr[i];
   cout<<getSum(pSum,2,5); 
    return 0;
}
