#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
}

int main(){
    int even[4] = {1,2,3,4};
    cout<<"Index of 1 is " << binarySearch(even,4,1) << ".";
    return 0;
}