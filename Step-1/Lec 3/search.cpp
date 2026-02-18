#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[]={1, 4, 5, 8, 9};
    int n= sizeof(A)/sizeof(A[0]);
    bool res= binary_search(A, A+n, 80);
    cout<<res;
    return 0;
}