#include <iostream>
#include <chrono>

#include <thread>
#include<algorithm>
using namespace std;

using namespace std::chrono;


typedef unsigned long long ull;

ull Evensum =0;
ull OddSum = 0;

void FindEvenSum(ull start , ull end){
    for(ull i=start;i<=end;i++){
        if(i%2==0){
            Evensum = Evensum +i;
        }
    }
}

void FindOddSum(ull start , ull end){
    for(ull i=start;i<=end;i++){
        if(i%2!=0){
            OddSum = OddSum +i;
        }
    }
}


int main(){
    ull start =1 ,end = 190;

    auto startTime = high_resolution_clock::now();
    std::thread t1(FindEvenSum,start,end);
    std::thread t2(FindOddSum,start,end);


    t1.join();
    t2.join();
    // FindEvenSum(start , end);
    // FindOddSum(start,end);
    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);
    std::cout<<" Odd Sum: "<<OddSum<< std::endl;
    std::cout<<" Even sum : "<<Evensum<<std::endl;

    std::cout<<"Sec "<<duration.count()/1000000<<std::endl;
}