#include<iostream>


int linearSearch(int arr[5], int num){
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {2,4,9,5,6};
    int num=4;

    std::cout<<linearSearch(arr,num);

}