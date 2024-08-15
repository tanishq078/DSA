#include<iostream>
using namespace std;
 
 
 
int fun(int arr[], int size, int element)
{
    int index;
    for(int i = 0;i < size; i++){
        if(arr[i]== element){
            index = i;
            break;
        }
    }
        if(index == size){
            return size;
        }
    for (int j = index;j<size;j++){
        arr[j] = arr[j+1];
    }
    return (size -1);
}
 
 
 
int main()
{
    // fun();
    return 0;
}