#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Check whether prime or not: ";
    cin>> n;
    int count = 0;
    for(int i = 1; i*i<= n; i++){
        if(n%i == 0){
            count++;
            if((n/i) != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout<<"Prime";
        return 0;
    }
    cout<<"Not-Prime";
    return 0;
}