#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // 1st pattern

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 2nd pattern

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 3rd pattern

    // for(int i=1; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 4th pattern

    // for(int i=1; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 5th pattern

    // for(int i=5; i>0; i--){
    //     for(int j=0; j<i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 6th pattern

    // for(int i=5; i>0; i--){
    //     for(int j=1; j<=i;j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 7th pattern
    // int n;
    // cout << "Enter the number of rows to be printed: ";
    // cin >> n;
    // for(int i=0; i<n; i++){
    //     for(int j=n-1-i; j>0; j--){
    //         cout << " ";
    //     }
    //     for(int k=(2*i+1); k>0; k--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // // 8th pattern

    // int n;
    // cout << "enter the number of rows to be printed: ";
    // cin >> n;
    // for(int i=n; i>0; i--){
    //     for(int j=n-i;j>0;j--){
    //         cout << " ";
    //     }
    //     for(int k=(2*i-1); k>0; k-- ){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 9th pattern 
    
    // for(int i=0; i<5; i++){
    //     for(int j=4-i; j>0; j--){
    //         cout << " ";
    //     }
    //     for(int k=(2*i+1); k>0; k--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i=5; i>0; i--){
    //     for(int j=5-i; j>0; j--){
    //         cout << " ";
    //     }
    //     for(int k=(2*i-1); k>0; k--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 10th pattern

    // int n; 
    // cin>>n;
    // for(int i=1; i<= 2*n-1; i++){
    //     int stars = i;
    //     if(i>n){
    //         stars=2*n-i;
    //     }
    //     for(int j=1; j<=stars; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    // 11th pattern

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << ((i+j)%2==0 ? "1" : "0");
    //     }
    //     cout << endl;
    // }
    // return 0;
    
    // 12th pattern

    // for(int i=3; i>=0; i--){
    //     for(int j=1; j<=4-i; j++){
    //         cout << j;
    //     }
    //     for(int k=2*i; k>0; k--){
    //         cout << " ";
    //     }
    //     for(int l=4-i; l>0; l--){
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 13th pattern

    // int count=1;
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }
    // return 0;
    
    // 14th pattern

    // for(int i=0; i<5; i++){
    //     char c = 'A';
    //     for(int j=0; j<=i; j++){
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 15th pattern

    // for(int i=5; i>0; i--){
    //     char c='A';
    //     for(int j=1; j<=i; j++){
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 16th pattern

    // for(char i='A'; i<'F';i++){
    //     for(char j='A'; j<=i; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 17th pattern

    // for(int i=0; i<4; i++){
    //     for(int j=3-i; j>0; j--){
    //         cout << " ";
    //     }
    //     char c='A';
    //     for(int k=0; k<=i; k++){
    //         cout << c;
    //         c++;
    //     }
    //     char d=c-2;
    //     for(int l=i; l>0; l--){
    //         cout << d;
    //         d--;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 18th pattern

    // char c='E';
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << c;
    //         c++;
    //     }
    //     c=c-i-2;
    //     cout << endl;
    // }
    // return 0;

    // 19th pattern

    // for(int i=5; i>0; i--){
    //     for(int j=0; j<i; j++){
    //         cout << "* ";
    //     }
    //     for(int k=2*(5-i); k>0; k--){
    //         cout << "  ";
    //     }
    //     for(int j=0; j<i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int i=1; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "* ";
    //     }
    //     for(int k=2*(5-i); k>0; k--){
    //         cout << "  ";
    //     }
    //     for(int l=1; l<=i; l++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 20th pattern

    // for(int i=1; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     for(int k=2*(5-i); k>0; k--){
    //         cout << " ";
    //     }
    //     for(int l=1; l<=i; l++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i=4; i>0; i--){
    //     for(int j=0; j<i; j++){
    //         cout << "*";
    //     }
    //     for(int k=2*(5-i); k>0; k--){
    //         cout << " ";
    //     }
    //     for(int l=0; l<i; l++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // return 0;

    // 21st pattern

    // int n;
    // cout << "Enter the number of rows to be printed: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     if(i == 1 || i == n) {
    //         for(int j = 0; j < n; j++) {
    //             cout << "* ";
    //         }
    //     } else {
    //         cout << "*";
    //         for(int j = 0; j < (2 * n - 3); j++) {  // controls gap between *
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 22nd pattern

    int n;
    cout<<"Enter the number to be shown in outer shell: ";
    cin>>n;
    int size = 2*n-1;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            int top = i;
            int left = j; 
            int bottom = size - 1 - i;
            int right = size - 1  - j;
            int minDist = min({top, left, bottom, right});
            cout<< n - minDist <<" ";
        }
        cout<<endl;
    }
    return 0;
}