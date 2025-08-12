#include<iostream>
// ABC
// DEF
// GHI
int main(){
    int n=3;
    char ch = 'A';
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<ch;
            ch = ch + 1;
        }
        std::cout<<std::endl;
    }
}