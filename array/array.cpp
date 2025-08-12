#include<iostream>

int main(){
    
    int size = 5;
    int marks[size];

    for(int i =0;i<size;i++){
        std::cin>>marks[i];
    }
    for (int i=0;i<size;i++){
        std::cout<<marks[i]<<std::endl;
    }

    return 0;

}