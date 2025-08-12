#include<iostream>

int main(){
    int marks;
    std::cout<<"ENter mzrks :"<<std::endl;
    std::cin>>marks;
    
    if (marks>90){
        std::cout<<"Grade A ";
    }
    else if(marks<=90 && marks > 80){
        std::cout<<"Grade B ";
    }
    else if (marks<=80 && marks > 70){
        std::cout<<"Grade C";
    }
    else { 
        std::cout<<" Grade D";
    }
    return 0;
}