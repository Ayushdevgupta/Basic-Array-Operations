// #include<iostream>
// using namespace std;

// int deleteArray(int arr[], int size, int val){
//     for(int i = 0; i < size-1; i++){
//         if(arr[i] == val){
//             for(int j = i; j < size-1; j++){
//                 arr[j] = arr[j + 1];
//             }
//         }
//     }
//     size = size - 1; 
    
// }

// void printArray(int ans[], int n){
//     for(int i = 0; i < n; i++){
//         cout<<" "<<ans[i];
//     }
// }


// int main(){
//     int a[5] = {3,8,12,5,6};
//     int index = deleteArray(a,5,12);
//     printArray(a,index);
// }


#include<iostream>
using namespace std;

int deleteElem(int arr[], int n, int x){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == x)
        break;

    }
    if(i == n)
    return n;
    for(int j = i; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    return (n-1);
}

void printArray(int ans[], int m){
    for(int i = 0; i < m; i++){
        cout<<" "<<ans[i];
    }
}

int main(){
    int a[] = {3,8,12,5,6};
    int index = deleteElem(a,5,10);
    printArray(a,index);
    return 0;
}