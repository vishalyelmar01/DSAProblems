#include<iostream>

int main(){
    int num =1;
    int n=5;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            std::cout<<" ";
        }

        //nums
        for(int j=0;j<n-i;j++){
            std::cout<<i+1;
        }
        std::cout<<std::endl;
    }
}