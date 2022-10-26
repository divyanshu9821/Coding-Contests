#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{

    int arr[] = {1,7,9,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}