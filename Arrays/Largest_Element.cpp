//Brute force

class Solution {
public:
    int largestElement(vector<int>& nums) {
   
   sort(nums.begin(),nums.end());

   return (nums[nums.size()-1]);

   
   

    }
};

//optimised solution
class Solution {
public:
    int largestElement(vector<int>& nums) {
   
   int n = nums.size(), max;
   int largest = nums[0];
   for(int i = 0; i<n; i++){
    if(nums[i]>largest){
         largest = nums[i];
    }
   }

  return largest;
    }
};