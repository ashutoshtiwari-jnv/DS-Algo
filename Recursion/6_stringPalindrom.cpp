#include<bits/stdc++.h>
using namespace std;

void checkStringPalindrom(string s,string r){
    if(r.size() == s.size()){
        if(s == r) {
            cout<<true<<endl;
            return ;}
        else{
            cout<<false<<endl;
            return;
        }
    }
    checkStringPalindrom(s,r+s[s.size()-1-r.size()]);
}

bool checkPalindrom(string s, int i){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false ;
    return checkPalindrom(s, i+1);
}

int main()
{
    cout<<"Is a palindrom using parameterised method?: ";
    checkStringPalindrom("hello","");
    cout<<"Is a palindrom?: "<<checkPalindrom("kak",0);
}