#include <algorithm>
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }else{
            sort(nums.begin(), nums.end());

            int maxgap=INT8_MIN;
            for(int i=1; i < nums.size();i++){
                int resta=nums[i] - nums[i-1];
                if(resta > maxgap){
                    maxgap=resta;
                }
            }
            return maxgap;
        }
    }
};
