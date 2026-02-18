#include<bits/stdc++.h>
using namespace std;
void merge(vector <int>& arr, int low, int mid, int high){
    int n = arr.size();
    vector <int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector <int>& arr, int low, int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(){
    cout << "Size of array: ";
    int n;
    cin >> n;
    vector <int> arr;
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    cout << "MergeSort: ";
    mergeSort(arr, 0, n - 1);
    for(int values: arr){
        cout << values << " ";
    }
    return 0;
}