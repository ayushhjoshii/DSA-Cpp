#include<bits/stdc++.h>
using namespace std;
int countDigits(int n);
int finalNum(int n);
int pwr(int dig, int count, int n);
bool isArmstrong(int n);
int main(){
    int n;
    cout<<"Is this number armstrong?? : ";
    cin>>n;
    int a=abs(n);
    cout<<boolalpha<<isArmstrong(n);
}

int countDigits(int n){
    int dc= (int) log10(n)+1;
    return dc;
}
int finalNum(int n){
    int fNum=0;
    int a=n;
    while(a>0){
        int lastDig= a%10;
        int powerDig=pwr(lastDig, countDigits(n), n);
        fNum=fNum+powerDig;
        a=a/10;
    }
    return fNum;
}
int pwr(int dig, int count, int n){
    int powerDig=1;
    count=countDigits(n);
    for(int i=0; i<count; i++){
        powerDig=powerDig*dig;
    }
    return powerDig;
}
bool isArmstrong(int n){
    return finalNum(n)==n;
}