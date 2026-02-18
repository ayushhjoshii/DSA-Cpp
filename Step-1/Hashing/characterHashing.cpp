#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int size = str.length();
    string strUnique = "";

    // precomputing
    int hash[123] = {0};
    for(int i = 0; i < size; i++){
        hash[str[i]]++;
    }

    // fetch
    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    while(q--){
        cout << "Enter a character: ";
        char character;
        cin >> character;
        cout << "Frequency: ";
        cout << hash[character] << endl;
    }
    
    return 0;
}