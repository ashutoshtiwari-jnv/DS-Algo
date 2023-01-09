/**
 * 1. Print Name 5 or n times 
 * 2. Print Linearly from 1 to n.
 * 3. Print from n to 1.
 * 4. Print Linearly from 1 to N (by Backtracking)
 * 5. Print from n to 1 (by Backtracking)
 */

#include<bits/stdc++.h>

using namespace std;

void printName(int i, int n){
    if(i == n) return;
    cout<<"Ashutosh Tiwari ";
    printName(++i, n);
}

void printFrom1ToNUsingBacktracking(int n){
    if(n == 0) return;
    printFrom1ToNUsingBacktracking(n-1);
    cout<<n<<" ";
}

void printFromNTo1UsingBacktracking(int i, int n){
    if(i > n) return;
    printFromNTo1UsingBacktracking(i+1,n);
    cout<<i<<" ";
}

void printFromNto1(int n){
    if(n == 0) return;
    cout<<n<<" ";
    printFromNto1(n-1);
}

void printFrom1toN(int i,int n){
    if(i == n+1) return;
    cout<<i<<" ";
    printFrom1toN(i+1,n);
}

int main(){
    cout<<"Print Name: ";
    printName(0,5);
    cout<<endl;
    cout<<"Print From 1 to n: ";
    printFrom1toN(1,5);
    cout<<endl;
    cout<<"Print From n to 1: ";
    printFromNto1(5);
    cout<<endl;
    cout<<"Print From 1 to n using backtracking: ";
    printFrom1ToNUsingBacktracking(5);
    cout<<endl;
    cout<<"Print From n to 1 using backtracking: ";
    printFromNTo1UsingBacktracking(1,5);
    cout<<endl;
    return 0;
}
