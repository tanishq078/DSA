// Missing and repeating in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);
    
    int duplicate_element = -1;

    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            duplicate_element = a[i];
            break;
        }
    }

    cout<<duplicate_element;

    return 0;
}