#include<iostream>
#include<vector>


std::vector<int> pairSum(std::vector<int> nums, int target){
    std::vector<int>ans;  
    for (int i = 0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;

            }
        }
    } 
}

int main(){
    std::vector<int> nums { 3,5,1,8,21,7};
    int target = 10;
    
    std::vector<int> ans = pairSum(nums,target);
    std::cout<< ans[0]<<","<< ans[1];
    return 0;
}