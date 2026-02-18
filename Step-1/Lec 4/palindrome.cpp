#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(int o);
int main(){
    int n;
    cout<<"Is this number palindrome or not ??: ";
    cin>>n;
    cout<<boolalpha<<check_palindrome(n);// here boolalpha is used so that we get the output in the form of true or false
    return 0;
}

bool check_palindrome(int o){
    int a=o;
    int revNum=0;
    while(o>0){
        int lastdig=o%10;
        revNum=(revNum*10)+lastdig;
        o=o/10;
    }
    return revNum==a;
}