#include<bits/stdc++.h>

using namespace std;

void printSubsequence(int i,vector<int>& v,vector<int> arr){
    if(i>=v.size()){
        for(auto i:arr) cout<<i<<" ";
        if(arr.size()==0) cout<<"{}"<<endl;
        return;

    }
    // Add the element to the array
    arr.push_back(v[i]);
    printSubsequence(i+1,v,arr);
    // Remove element from array
    arr.pop_back();
    printSubsequence(i+1,v,arr);
}

int main(){
    vector<int> v = {3,1,2};
    vector<int> arr;
    cout<<"Subsequences are: "<<endl;
    printSubsequence(0,v,arr);
    return 0;
}