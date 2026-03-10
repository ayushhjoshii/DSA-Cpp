#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(vector<int>& arr, int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return;
    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

vector<int> unionOfArr(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while((i < n1) && (j < n2)){
        if(arr1[i] <= arr2[j]){
            if((unionArr.size() == 0) || (unionArr.back() != arr1[i])){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if((unionArr.size() == 0) || (unionArr.back() != arr2[j])){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j < n2){
        if((unionArr.size() == 0) || (unionArr.back() != arr2[j])){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while(i < n1){
        if((unionArr.size() == 0) || (unionArr.back() != arr1[i])){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    return unionArr;
}

int main(){

    int n1;
    int n2;
    cout << "Size of arr1: ";
    cin >> n1;
    cout << "Size of arr2: ";
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    cout << "Values in arr1: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Values in arr2: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    
    cout << "Union of arr1 and arr2: ";
    for(int element: unionOfArr(arr1, arr2)){
        cout << element << " ";
    }


    //For moving all the zeros to the last.

    // int n;
    // cout << "Size: ";
    // cin >> n;
    // vector<int> arr(n);
    // cout << "Values: ";
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout << "After moving zeros to last: ";
    // zerosToEnd(arr, n);
    // for(auto element: arr){
    //     cout << element << " ";
    // }
    return 0;
}