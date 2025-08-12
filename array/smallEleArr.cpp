#include<iostream>

int main(){
    int size;
    int arr[size];
    std::cout<<"ENter array size"<<std::endl;
    std::cin>>size;
    for (int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Smallest num"<<std::endl;
    int smallest =INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        //smallest = std::min(arr[i],smallest);
    }
    std::cout<<smallest;
    return 0;
}