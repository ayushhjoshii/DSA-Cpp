#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.push(3);
    int size=pq.size();
    for(int i=0; i<size; i++){
        cout<< pq.top()<<" ";
        pq.pop();
    }
    return 0;
}