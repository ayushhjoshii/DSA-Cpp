#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int secLar(int arr[], int n){
    int sMax = arr[0];
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            sMax = max;
            max = arr[i];
        }else if((arr[i] < max) && (arr[i] > sMax)){
            sMax = arr[i];
        }
    }
    return sMax;
}
int main(){
    cout << "Size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the values in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Largest: " << Largest(arr, n) << endl;
    cout << "Second largest: ";
    cout << secLar(arr, n);
    return 0;
}