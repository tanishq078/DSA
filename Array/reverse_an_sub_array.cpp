#include <iostream>
using namespace std;
#include <vector>;

vector<int> reverseSubArray(vector<int> &arr, int l, int r)
{
    // code here
    l -= 1; // Convert to 0-based indexing
    r -= 1; // Convert to 0-based indexing
    while (l < r)
    {
        // Swap elements at indices l and r
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    return arr;
}

int main()
{

    return 0;
}