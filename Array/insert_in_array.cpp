#include <iostream>
using namespace std;
int fun(int arr[], int size, int value, int cap, int pos)
{
    if(size==cap){
        return size;
    }
    int index = pos -1;
    for(int i = size-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = value;

    return (size+1);
}
int main()
{
    
}