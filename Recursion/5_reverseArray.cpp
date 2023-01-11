#include<bits/stdc++.h>

using namespace std;

// Parameterised method
void reverseWith4Parameter(vector<int>& arr,int size,int i,vector<int>& arr2){
    if(i == size) return;
    reverseWith4Parameter(arr,size,i+1,arr2);
    arr2.push_back(arr[i]);
}

// Functional method with 2 pointers
void reverseWith2PointerMethod(vector<int>& arr, int l, int n){
    if(l>=n) return;
    swap(arr[l],arr[n]);
    reverseWith2PointerMethod(arr,l+1,n-1);
}

// Functional method with 1 pointer
void reverseWith1PointerMethod(vector<int>& arr, int i){
    if(i >= arr.size()/2) return;
    swap(arr[i],arr[arr.size()-1-i]);
    reverseWith1PointerMethod(arr,i+1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {};
    reverseWith4Parameter(arr,5,0,arr2);
    for(auto i: arr2) cout<<i<<" ";
    cout<<endl;
    reverseWith2PointerMethod(arr,0,arr.size()-1);
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
    reverseWith1PointerMethod(arr,0);
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}