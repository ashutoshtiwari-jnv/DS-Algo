// Print only one sebsequence whose sum is k

#include<bits/stdc++.h>

using namespace std;

void printOneSequenceSumK(int i,vector<int> &arr,vector<int> arr2,int k,bool &gotSubSequence,int sum){
    if(gotSubSequence) return;
    if(i >= arr.size()){
        if(sum == k){
            for(auto i: arr2) cout<<i<<" ";
            cout<<endl;
            gotSubSequence = true;
        }
        return;
    }

    arr2.push_back(arr[i]);
    sum+=arr[i];
    printOneSequenceSumK(i+1,arr,arr2,k,gotSubSequence,sum);
    arr2.pop_back();
    sum-=arr[i];
    printOneSequenceSumK(i+1,arr,arr2,k,gotSubSequence,sum);
}

int main()
{
    vector<int> v = {3,1,2};
    vector<int> arr;
    bool gotSubSequence = false;
    cout<<"Subsequence is: "<<endl;
    printOneSequenceSumK(0,v,arr,3,gotSubSequence,0);
}