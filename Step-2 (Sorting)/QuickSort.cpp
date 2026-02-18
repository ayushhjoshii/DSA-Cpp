#include<bits/stdc++.h>
using namespace std;
int fn(vector <int>& arr, int low, int high){
    int i = low;
    int j = high;
    while(i < j){
        while((arr[i] <= arr[low]) && (i < high)){
            i++;
        }
        while((arr[j] > arr[low]) && (j > low)){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}
void quickSort(vector <int>& arr, int low, int high){
    if(low < high){
        int pIndex = fn(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}
int main(){
    cout << "Size of array: ";
    int n;
    cin >> n;
    vector <int> arr;
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    cout << "QuickSort: ";
    quickSort(arr, 0, n - 1);
    for(auto e : arr){
        cout << e << " ";
    }
    return 0;
}