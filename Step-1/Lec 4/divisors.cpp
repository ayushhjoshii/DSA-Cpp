#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter the number whose divisors are to be found: ";
    cin>>a;
    cout<<"divisors: ";
    vector <int> v;
    for(int i=1; i*i<=a; i++){
        if(a%i==0){
            v.push_back(i);
            if(a/i != i){
                v.push_back(a/i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(int it: v){
        cout<<it<<" ";
    }
    return 0;
}