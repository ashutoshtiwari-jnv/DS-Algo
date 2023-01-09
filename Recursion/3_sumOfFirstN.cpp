#include<bits/stdc++.h>

using namespace std;

// Parametrise recursion method
void sumByParametriseMethod(int n, int sum){
    if(n == 0){
        cout<<sum<<endl;
        return;
    }
    sumByParametriseMethod(n-1,sum+n);
}

// Functional recursion method or Recurance relation method
int sumByFunctionalMethod(int n){
    if(n == 0) return 0;
    return n+sumByFunctionalMethod(n-1);
}

int main(){
    int n = 5;
    cout<<"sumByFunctionalMethod: ";
    sumByParametriseMethod(n,0);
    cout<<endl;
    cout<<"sumByFunctionalMethod: "<<sumByFunctionalMethod(n);
    return 0;
}