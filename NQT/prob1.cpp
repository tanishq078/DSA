#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2,1,2,0,0,1,2,1};
    int count0 = 0, count1 = 0, count2 = 0;

    for(int elem : a){
        if(elem == 0)
            count0++;
        else if(elem == 1)
            count1++;
        else
            count2++;
    }

    int i = 0;
    while(count0!=0){
        a[i]=0;
        i++;
        count0--;
    }
    while(count1!=0){
        a[i]=1;
        i++;
        count1--;
    }
    while(count2!=0){
        a[i]=2;
        i++;
        count2--;
    }

    for(int elem : a){
        cout<<elem<<" ";
    }
    return 0;
}