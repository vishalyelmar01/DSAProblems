#include<iostream>


int main(){
    int x= 321;
    int digit =0;
    while(x>0){
        int rem = x%10;
        digit = digit *10 +rem;
        x=x/10; 
    }
    std::cout<<digit;
}