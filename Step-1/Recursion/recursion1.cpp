#include<bits/stdc++.h>
using namespace std;
void printName(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Ayush \n";
    printName(i+1, n);
}

void printNum(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    printNum(i+1, n);
}

int printRev(int i, int n){
    if(i<1){
        return 1;
    }
    cout<<i<<" ";
    return printRev(i-1, i);

}

void backTrack(int i, int n){
    if(i<1){
        return;
    }
    backTrack(i-1, n);
    cout<<i<<" ";
}

void revBackTrack(int i, int n){
    if(i>n){
        return;
    }
    revBackTrack(i+1, n);
    cout<<i<<" ";
}

void printSumParameterized(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printSumParameterized(i-1, sum+i);
}

int printSumFunctional(int n){
    if(n==0){
        return 0;
    }
    n == 1 ? cout<< n <<" = " : cout<< n <<" + ";
    return n + printSumFunctional(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    n == 1 ? cout << n <<" = " : cout << n <<" * ";
    return n * factorial(n-1); 
}

void arrRev(int l, int revArr[], int length){
    if(l>=length/2){
        cout<<"[ ";
        for(int i = 0; i<length; i++) i==length-1 ? cout<<revArr[i]<<" ]": cout<<revArr[i]<<", "; 
        return;
    } 
    int temp = revArr[l];
    revArr[l] = revArr[length - l - 1];
    revArr[length - l -1]= temp;

    arrRev(l+1, revArr, length);

}

void reverseString(vector<char>& s) {
    for(int i = 0; i < (s.size())/2; i++){
        swap(s[i], s[s.size()-i-1]);
    }
    for(auto value : s){
        cout<< value;
    }
}

bool isPalindrome1(int l, string revStr, string str, int length){
    if(l>=length/2){ 
        return revStr == str ? true : false;
    } 
    swap(revStr[l], revStr[length-l-1]);

    return isPalindrome1(l+1, revStr, str, length);
    
}

bool isPalindrome2(string str, int left){
    return str[left] != str[str.size() - left - 1] ? false : (left >= str.size() / 2 ? true : isPalindrome2(str, left+1));
}

int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    cout<<"Now checking if the string is palindrome or not ? : ";
    cout<<boolalpha<<isPalindrome2(s, 0);
    return 0;
}