#include<iostream>
using namespace std;

int insert(int arr[], int size, int val, int pos, int cap){
    if(size == cap){
        return size;
    }
    int index = pos - 1;
    for(int i = size - 1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = val;

    return size + 1;
}

int print(int ans[], int n){
    for(int i = 0; i < n; i++){
        cout<<" "<<ans[i];
    }
}


int main(){
    int a[5] = {5,7,10,20};
    insert(a,4,3,2,5);
    print(a,5);
}