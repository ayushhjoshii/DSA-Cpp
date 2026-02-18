#include<bits/stdc++.h>
using namespace std;
int main(){

    // Searching for the index of a given element in the array using the concept of lower_bound

    int x;
    cout<<"enter the value of x: ";
    // cout<<"enter the value whose index is to be searched:"<<" ";
    cin>>x;
    int A[]= {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n=sizeof(A)/sizeof(A[0]);
    int ind=lower_bound(A, A+n, x)-A;
    // if(ind !=n && A[ind]==x){ //here we have written ind != n to handle the edge cases. because A[ind]==X can't be compared if ind=n.
    //     cout<<ind;
    //     return 0;
    // }
    // cout<<"-1";
    // return 0;

    // Searching the largest number smaller than x using lower_bound

    ind--;
    if(ind>=0){
        cout<<"largest number smaller than x is : "<<A[ind];
        return 0;
    }
    cout<<"-1";
    return 0;
}