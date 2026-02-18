#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose digits are to be counted: ";
    cin>>n;
    int count= (int) log10(n)+1;
    cout<<"Number of digits: "<<count;
    return 0;
}