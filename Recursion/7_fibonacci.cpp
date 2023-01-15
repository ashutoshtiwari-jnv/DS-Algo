#include<bits/stdc++.h>
using namespace std;

// Multiple recursion calls in a function
int feb(int n){
    if(n<=1) return n;
    int last = feb(n-1);
    int slast = feb(n-2); 
    return last + slast;
}

int main(){
    cout<<"4th Febonacci series is: "<<feb(4);
}