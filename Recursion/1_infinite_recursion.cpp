#include<bits/stdc++.h>
#include<string>
 
using namespace std;

void printnum(int n){
    if(n==5) return;
    n--;
    printnum(n);
    cout<<n<<" ";
}

int main()
{
    printnum(10);
    return 0;
}