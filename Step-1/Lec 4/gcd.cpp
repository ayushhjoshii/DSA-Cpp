#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    m=abs(m);
    n=abs(n);
    if(m==0 && n==0) {cout<<"GCD= not defined"; return 0;}
    while(m>0 && n>0){
        if(m>n) m=m%n;
        else n=n%m;
    }
    cout<<"GCD= "<<max(m,n);
    return 0;
}