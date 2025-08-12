#include<iostream>
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1
int main(){

    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}