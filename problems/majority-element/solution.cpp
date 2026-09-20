class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int majorityele = 0;
        int count=0;

        for (int i = 0; i < n; i++) {
              
              if ( count == 0){
                majorityele = nums[i];
              }
              if(nums[i] == majorityele){
                count++;
              }
              else{
                count--;
              }
              
        }
            
         return majorityele;  
            
        }

    
};