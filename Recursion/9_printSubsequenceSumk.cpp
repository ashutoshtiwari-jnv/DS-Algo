#include<bits/stdc++.h>
using namespace std;

void printSubsequenceSumK(int i, vector<int> &ds,vector<int> arr,int sum,int k){
    if(i>=ds.size()){
        if(sum == k){
            for(auto it: arr) cout<<it<<" ";
            cout<<endl;
            return;
        }
        return;
    }

    arr.push_back(ds[i]);
    sum+=ds[i];
    printSubsequenceSumK(i+1,ds,arr,sum,k);
    arr.pop_back();
    sum-=ds[i];
    printSubsequenceSumK(i+1,ds,arr,sum,k);
}

int main(){
    vector<int> v = {3,2,4,5};
    vector<int> arr;
    cout<<"Subsequences are: "<<endl;
    printSubsequenceSumK(0,v,arr,0,7);
    return 0;
}