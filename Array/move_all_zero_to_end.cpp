#include<iostream>
using namespace std;
#include<vector>
 
void function(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i]!=0){
            // swap(arr[i], arr[count]);
            count++;
        }
    }
}
 
 
int main()
{
    return 0;
}