#include<iostream>
using namespace std;
int searchArray(int arr[], int size, int val){
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;

}



int main(){
    int a[5] = {10,2,24,55,43};
    int index = searchArray(a,5,24);

    if(index == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at position"<<" "<<index<<endl;
    }
}