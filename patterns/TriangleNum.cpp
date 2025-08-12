#include<iostream>
// A
// BB
// CCC
// DDDD
// EEEEE
// 1
// 22
// 333
// 4444
// 55555

void charPattern(){
    int n = 5;
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<ch;
            
        }
        ch= ch + 1;
        std::cout<<std::endl;
    }
}
void numPattern(){
    int n = 5;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<num;
            
        }
        num++;
        std::cout<<std::endl;
    }
    }

int main(){
     numPattern();
     charPattern();
     return 0;

}