#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,1,2,3,3,4,5,6};
    int j = 1;
    int n = sizeof(a)/sizeof(a[0]);

    for(int i = 1; i<n;i++){
        if(a[i] != a[i-1]){
            a[j] = a[i];
            j++;
        }
    }

    for(int elem : a){
        cout<<elem<<" ";
    }

    return 0;
}