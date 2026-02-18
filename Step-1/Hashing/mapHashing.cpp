#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    map <int, int> mpp;
    cout << "Enter the elements in the array: ";
    //precompute
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    cout << "The frequencies corresponding to the elements are as follows:\n";
    //iterate through the map
    for(auto it: mpp){
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Number: ";
        cin >> number;
        //fetch
        cout << "Frequency: " << mpp[number] << endl;
    }
}