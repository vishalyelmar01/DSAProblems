#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the number: "<<std::endl;
    std::cin>>n;
    bool isPrime = true;
    // for (int i=2;i<=n-1;i++){
    //     if(i%2==0){
    //         isPrime=false;
    //         break;
    //     }

    // }
     for (int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }

    }
    if (isPrime==true){
        std::cout<<"Number is Prime";
    }else{
        std::cout<<"NUmber is not prime";
    }
    return 0;
}