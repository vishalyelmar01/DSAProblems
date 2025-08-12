#include<iostream>

// 1
// 23
// 456
int main(){

    int n=3;
    int num =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<num;
            num++;
        }
        
        std::cout<<std::endl;
    }
}