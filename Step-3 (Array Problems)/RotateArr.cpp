#include<bits/stdc++.h>
using namespace std;
void leftRotateOne(int arr[], int n){
    // int temp = arr[0];
    for(int i = 1; i < n; i++){
        swap(arr[i], arr[i - 1]);
    }
    // arr[n - 1] = temp;
}
void reverse(vector<int>& nums, int start, int end){
    while(start <= end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}
void LRotateKPlaces(vector<int>& arr, int n, int k){
    k = k % n;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}
void RRotateKPlaces(vector<int>& arr, int n, int k){
    k = k % n;
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);
}
int main(){
    int n;
    int k;
    cout << "Size: ";
    cin >> n;
    cout << "K: ";
    cin >> k;
    vector<int> arr;
    cout << "Values: ";
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "After Left rotating k places: ";
    LRotateKPlaces(arr, n, k);
    for(auto element : arr){
        cout << element << " ";
    }
    cout << " \nAfter Right rotating k places: ";
    RRotateKPlaces(arr, n, k);
    // leftRotateOne(arr, n);
    for(auto element : arr){
        cout << element << " ";
    }
    return 0;
}