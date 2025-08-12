#include<iostream>

#include<vector>

int main(){
    std::vector<int>vec;
    std::cout<<"Size of vector: "<<vec.size()<<std::endl;  
     vec.push_back(8);
    vec.push_back(28); // add element at last position of vector
    vec.emplace_back(54);// add element in vector
    vec.pop_back();// deletes last value or element 
    
    std::cout<<vec.front();
    std::cout<<vec.back();
    std::cout<<vec.at(1);
    for(int val :vec){
        std::cout<<val<< " ";
    }
        std::cout<<"Size of vector: "<<vec.size()<<std::endl;  

    return 0;

}