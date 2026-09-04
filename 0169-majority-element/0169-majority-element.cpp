class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int elm;

        for (int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                elm=nums[i];
            }
            else if(nums[i]==elm){
                count++;
            }
            else
            {
                count--;
            }
        }
            int count1=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==elm){
                    count1++;
                }

            }
            if(count1>(nums.size())/2)
            return elm;
        
        
        return -1;
}
        
    
};