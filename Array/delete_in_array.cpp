#include<iostream>
using namespace std;
 
 
 
int fun(int arr[], int size, int element)
{
    int index;
    for(index = 0;index < size; index++){
        if(arr[index]== element){
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