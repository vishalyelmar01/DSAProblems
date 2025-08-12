#include<iostream>
using namespace std;  


int main(){
    int nums[] = {5,2,15,25,9,82,3,5,12};
    int size =9;

    int Largest = INT16_MIN;

    for(int i=0;i<size;i++){
        if(nums[i]>Largest){
            Largest = nums[i];
        }

        //Largest = max(nums[i],Largest);
    }
    for(int i=0;i<size;i++){
        if(Largest==nums[i]){
            std::cout<<"Index of largest element" << i<<endl;
        }
    }
    cout<<"Largest : "<<Largest<<endl;
}