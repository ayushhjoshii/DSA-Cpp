#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i = n - 1; i > 0; i--){
        int didSwap = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            cout << "Already Sorted !! \n";
            return;
            //In this case the time complexity will be O(N) and it is the best case as the array is already sorted.
        }
    }
}
int main(){
    cout << "Size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Bubble Sort: ";
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}