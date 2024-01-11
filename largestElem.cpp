//Naive Approach
// #include<iostream>
// using namespace std;

// int largestElem(int arr[], int n){

//     for(int i = 0; i < n; i++){
//         bool flag = true;
//         for(int j = 0; j < n; j++){
//             if(arr[j] > arr[i]){
//             flag = false;
//             break;
//             }

//         }
//         if(flag == true)
//         return i;
        
//         }
//         return -1;
//     }




// int main(){
//     int a[] = {40,8,50,100};
//     cout<<largestElem(a,4);
//     return 0;
// }

//Efficient Approach
#include<iostream>
using namespace std;

int getLargest(int arr[], int n){
    int res = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[res]){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {10,20,8,12};
    cout<<getLargest(arr,4);
    return 0;
}