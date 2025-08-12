#include<iostream>
// ABCD
// ABCD
// ABCD
// ABCD
int main(){

    int n=4;

    for (int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            std::cout<<ch;
            ch = ch +1;
        }
        std::cout<<std::endl;
    }
}