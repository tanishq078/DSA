#include<iostream>
using namespace std;

bool isPalindrom(string S, int s, int e){
    if(s>=e){
        return true;
    }    
    return (S[s]==S[e]) && isPalindrom(S, s+1, e-1);
}

int main(){
    string S = "aabbaa";
    int s = 0;
    int e = S.length() - 1;
    cout << isPalindrom(S, s, e);
    return 0;
}