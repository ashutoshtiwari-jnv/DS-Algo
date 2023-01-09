#include<bits/stdc++.h>

using namespace std;

// Functional recursion method or Recurance relation method
int fact(int n){
    if(n == 1) return 1;
    return n*fact(n-1);
}

int main(){
    cout<<"Factorial: "<<fact(3);
}