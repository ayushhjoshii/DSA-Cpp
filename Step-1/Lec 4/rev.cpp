#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be reversed: ";
    cin>>n;
    int a=n;
    int revnum=0;
    while(a>0){
        int lastdig=a%10;
        revnum=(revnum*10)+lastdig;
        a=a/10;
    }
    cout<<"Reversed: "<<revnum;
    return 0;
}