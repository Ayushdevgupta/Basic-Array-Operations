///////// Naive Approach
// #include<iostream>
// using namespace std;

// int getLargest(int arr[], int n){
//     int res = 0;
//     for(int i = 1; i < n; i++){
//         if(arr[i] > arr[res]){
//             res = i;
//         }
//     }
//     return res;
// }

// int secondLargest(int arr[], int n){
//     int largest = getLargest(arr,n);
//     int res = -1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] != arr[largest]){
//             if(res == -1){
//                 res = i;
//             }
//             else if(arr[i] > arr[res]){
//                 res = i;

//             }
//         }
//     }
//     return res;
// }

// int main(){
//     int arr[] = {10,20,8,12};
//     cout<<secondLargest(arr,4);
//     return 0;
// }

//Efficient Approach
#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int res = -1;
    int largest = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res])
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10,20,8,12};
    cout<<secondLargest(arr,4);
    return 0;
}

{12,12,12}//-1;
{12,13,14,22}//14
{12,13,14,10}//13
{12,12,12,1}//1