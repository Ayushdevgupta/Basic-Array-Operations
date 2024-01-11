#include<iostream>
using namespace std;

void isReverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int ans[], int n){
    for(int i = 0; i < n; i++){
        cout<<" "<<ans[i];
    }
}



int main(){
    int arr[] = {10,5,30};
    isReverse(arr,3);
    printArray(arr,3);
}