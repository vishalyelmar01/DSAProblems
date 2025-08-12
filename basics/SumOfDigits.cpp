#include<iostream>


int sumOfdigits(int num){
    int sum = 0;
    int lastdigit;
    while(num>0){
        lastdigit=num%10;
        num=num/10;
        sum=sum+lastdigit;
    }
    return sum;

}
int main(){
    std::cout<<sumOfdigits(245);
}