#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n, vector<int> arr, int target){
    int low;
    int high = n - 1;
    for(low = 0; low <= high;){
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}
int main(){
    cout<<"size: ";
    int size;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements in sorted order: ";
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        
    }
    cout << "Enter the element to be searched: ";
    int find;
    cin >> find;
    cout << "The element should be present at index: ";
    cout << binarySearch(size, arr, find);
}