#include<bits/stdc++.h>
using namespace std;
void leftRotateOne(int arr[], int n){
    // int temp = arr[0];
    for(int i = 1; i < n; i++){
        swap(arr[i], arr[i - 1]);
    }
    // arr[n - 1] = temp;
}
void RotateKPlaces(vector<int>& arr, int n, int k){
    vector<int> temp;
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }
    for(int i = k; i < n; i++){
        arr[i - k] = arr[i];
    }
    for(int i = n - k; i < n; i++){
        arr[i] = temp[i - (n - k)];
    }
    cout << "size of temp is " << temp.size() << endl;
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
    cout << "After Rotating k places: ";
    RotateKPlaces(arr, n, k);
    // leftRotateOne(arr, n);
    for(auto element : arr){
        cout << element << " ";
    }
    return 0;
}