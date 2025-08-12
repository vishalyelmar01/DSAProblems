#include<iostream>

int main(){

    int n=5;
    int arr[5]={1,-2,3,4,-5};
    int maxSum= INT16_MIN;

    for(int st = 0;st<n;st++){
        int currSum =0;
        for(int end = st;end<n;end++){
            currSum += arr[end];
            maxSum = std::max(currSum , maxSum);
        }
    }
    std::cout<<"Max subarray sum = "<<maxSum;
}