//Naive Approach
// #include<iostream>
// using namespace std;

// string arraySorted(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[i] > arr[j]){
//                 return "No";
//             }
//         }
//     }
//     return "Yes";
// }




// int main(){
//     int arr[] = {7,20,30,10};
//     string ans = arraySorted(arr,4);
//     cout<<ans;
//     return 0;
// }

//Efficient Approach
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;

        }
    }
    return true;
}


int main(){
    int arr[] = {5,12,30,2,35};
    if(isSorted(arr,5)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;

}