#include<iostream>

int main(){

    int num;
    std::cout<<" Enter num : "<<std::endl;
    std::cin>>num;

    bool isNegative  = false;

    if(num<0){
        num = num *(-1);
        isNegative = true;
    }
    int reversedNum = 0;
    while(num>0){
        int rem = num%10;
        reversedNum = reversedNum*10 + rem;
        num /=10;
    }

    if(isNegative){
        reversedNum = reversedNum *(-1);
    }
    std::cout<<reversedNum;
}