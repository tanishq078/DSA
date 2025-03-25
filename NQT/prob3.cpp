// Leaders in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);

    // Approach - 1
    // int flag;
    // for(int i = 0; i < n; i++){
    //     flag  = 1;
    //     for(int j = i+1; j < n; j++){
    //         if(a[j] > a[i]){
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if(flag==1){
    //         cout<<a[i]<<" ";
    //     }
    // }

    // Approach - 2
    // int max = a[n-1];

    // vector<int> leaders; //additional space

    // leaders.push_back(max);

    // for(int i = n-2; i >= 0; i--){
    //     if(a[i] >= max){
    //         max = a[i];
    //         leaders.push_back(max);
    //     }
    // }
    
    // // for(int elem: leaders){
    // //     cout<<elem<<" ";
    // // }

    // int m = leaders.size();
    // for(int j = m-1; j>=0; j--){
    //     cout<<leaders[j]<<" ";
    // }


    // Approach 3 (no auxilary space)
    int max = a[n-1];
    int right = n-2;

    
    for(int i = n-2; i >= 0; i--){
        if(a[i] >= max){
            max = a[i];
            a[right] = max;
            right--;
        }
    }
    right++;
    
    for(int j = right; j<n; j++){
        cout<<a[j]<<" ";
    }
    return 0;
}