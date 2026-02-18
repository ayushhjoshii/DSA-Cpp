#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {500, 100, 60 , 45, 99};
    v.emplace_back(105);
    for(vector<int> :: iterator it= v.begin(); it != v.end(); it++){
        cout<< *(it)<<" ";
    }
    cout<<"\n Last element: "<< v.back();
    return 0;
}