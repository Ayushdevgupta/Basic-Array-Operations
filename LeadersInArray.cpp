//Naive Approach
// #include<iostream>
// using namespace std;
// void leadersArray(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for(int j = i+1; j < n; j++)
//         {
            
//             {
//                 flag = true;
//                 break;
                
//             }

//         }
//         if(flag == false)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// }



// int main()
// {
//     int arr[] = {7,10,4,3,6,5,2};
//     leadersArray(arr,7);
    
// }

//Efficient Approach
#include<iostream>
using namespace std;

void getLead(int arr[], int n)
{
    int currLead = arr[n-1];
    int leader[n];//Array to reverse leaders
    leader[0] = currLead;
    int count = 1;
    for(int i = n - 2; i > 0; i--)
    {
        if(arr[i] > arr[currLead])
        {
            currLead = i;
            leader[count++] = arr[currLead];
        }
    }
    for(int i = count - 1; i >= 0; i--)
    {
        cout<<leader[i]<<" ";
    }
}
int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    getLead(arr,7);
}