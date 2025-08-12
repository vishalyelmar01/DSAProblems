#include<iostream>

#include<vector>

int kel(std::vector<int> vec, int k){
     for(int i:vec){
        if(i>k){
            return i+1;
        }
    }
    return -1;
}
int main(){
    std::vector<int> vec{1,3,5,21,89,28};

    int ans= kel(vec,20);
    std::cout<<ans;

   
}