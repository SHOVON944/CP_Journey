class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int majority_count = 0;
        for(int i=0; i<nums.size(); i++){
            if(majority_count==0){
                majority=nums[i];
                majority_count = 1;
            } else if(majority==nums[i]){
                majority_count++;
            } else{
                majority_count--;
            }
        }
        return majority;
    }
};