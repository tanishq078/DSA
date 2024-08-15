#include<iostream>
using namespace std;
#include <vector>;
 
int print2largest(vector<int> &arr) {
        // Code Here
        
        int res = -1;
        
        int largest = 0;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>arr[largest]){
                res = largest;
                largest = i;
            }
            else if(arr[i] != arr[largest]){
                if(res == -1 || arr[i]> arr[res]){
                    res = i;
                }
            }
        }
        if(res == -1){
            return res;
        }
        return arr[res];
    }
 
 
 
int main()
{
    // fun();
    return 0;
}