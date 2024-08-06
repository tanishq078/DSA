#include<iostream>
using namespace std;

int digit(int n){
    if(n<=9){
        return n;
    }
    return (n%10) + digit(n/10);
}

int main(){
    int n = 244;
    cout << digit(n);
    return 0;
}