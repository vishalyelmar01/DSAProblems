#include<iostream>

int main(){
    char ch;
    std::cout<<"Enter a character"<<std::endl;
    std::cin>>ch;
    if(ch>= 'a' && ch<='z'){
        std::cout<<"Lowercase";
    }
    else{
        std::cout<<"Uppercase";
    }

}