#include<bits/stdc++.h>

using namespace std;

// Functional recursion method or Recurance relation method
int fact(int n){
    if(n == 1) return 1;
    return n*fact(n-1);
}

void fact2(int n, int fac){
    if(n == 1){
        cout<<fac;
        return;
    } 
    fact2(n-1,fac*n);
}

int main(){
    cout<<"Factorial by functional method: "<<fact(3)<<endl;
    cout<<"Factorial by parametrise factorial method: ";
    fact2(3,1);
}