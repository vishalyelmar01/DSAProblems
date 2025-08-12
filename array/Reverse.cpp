#include<iostream>

void reverseArr(int arr[],int size){
    int start = 0;
    int end = size -1;

    while(start<end){
        std::swap(arr[start], arr[end]);
        start ++;
        end--;
    }

}

int main(){
    int arr[]={2,5,12,5,25,5,35,9};
    int size = 8;

    reverseArr(arr,size);

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;

}