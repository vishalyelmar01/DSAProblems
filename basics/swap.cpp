#include<iostream>

int main(){
    int a=4;
    int b=9;
    int tmp;

    tmp=a+b;
    b=tmp-b;
    a=tmp-a;
    std::cout<<a << " "<<b;// << " "<<tmp << " ";


}