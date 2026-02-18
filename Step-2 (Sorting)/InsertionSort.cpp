#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; (j > 0) && (arr[j - 1] > arr[j]); j--){
            swap(arr[j], arr[j - 1]);
        }
    }
}
int main(){
    cout << "Size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Insertion Sort: ";
    insertionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}