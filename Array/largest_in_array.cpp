#include<iostream>
using namespace std;
#include <vector>;
 
 
int largest(vector<int> &arr, int n){
        int res = 0;
        for(int i=0; i<n;i++){
            if(arr[i]>res){
                res = arr[i];
            }
        }
        return res;
    }

 
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    largest(arr, n);
    // fun();
    return 0;
}