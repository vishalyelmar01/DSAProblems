#include<iostream>

int main(){
    int num;
    std::cout << "Enter a number "<<std::endl;
    std::cin>> num;
    if(num%2==0){
        std::cout<<"number is even ";

    }else{
        std::cout<<"number is odd";
    }
    return 0;
}