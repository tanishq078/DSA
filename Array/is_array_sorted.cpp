#include<iostream>
using namespace std;
#include<vector>;
 
 
bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for (int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[i-1])
                return false;
        }
        return true;
    }
 
 
int main()
{
    // fun();
    return 0;
}