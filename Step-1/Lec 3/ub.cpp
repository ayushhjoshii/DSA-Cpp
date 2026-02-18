#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter the element whose last occurance is to be found: "<<" ";
    cin>>x;
    int A[]= {1,4,4,4,4,9,10,11};
    int n=sizeof(A)/sizeof(A[0]);
    int ind = upper_bound(A, A+n, x) - A;
    ind--;
    if(ind >=0 && A[ind]==x){
        cout<<"index: "<<ind;
        return 0;
    }
    cout<<"-1";
    return 0;
}