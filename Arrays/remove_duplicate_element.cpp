class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st ;
         int n = nums.size();
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }
         int index = 0;
          for(auto t: st){
            nums[index] = t;
            index++;
          }
        

          return index;
    }
};

//optimise
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index = 0;
        int n = nums.size();

        for(int i = 1; i < n; i++){
            if(nums[index] != nums[i]){
                nums[index+1] = nums[i];
                index++;
            }
        }

        return index+1;
    }
};