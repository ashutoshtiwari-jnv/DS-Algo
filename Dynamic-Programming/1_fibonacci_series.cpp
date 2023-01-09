//First leacture in the dynamic series fibonacci series program
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

void fib1(int x){
    // Method which i knows till now to solve fibonacci series (TC=O(n),SC=) 
    int next;
    int first = 0;
    int last = 1;
    cout<<first<<" "<<last<<" ";
    for(int i = 2; i<x; i++){
        next = first + last;
        first = last;
        last = next;
        cout<<next<<" ";
    } 
}

int main()
{
    int x;
    cout<<"Enter the number of elements: ";
    cin>>x;
    fib1(x);
    return 0;
}