class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>index;
        int n = nums.size();
        int left = 0;
        int right = n-1;

        for(int i = 0; i < n; i++){
             index.push_back({nums[i], i});
        }

        sort(index.begin(),index.end());

        while(left < right){
            
            int sum = index[right].first + index[left].first;

            if(index[right].first + index[left].first == target){
                return {index[left].second,index[right].second};
            }

            else if( sum > target){
              right --;
            }
           
           else{
            left ++;
           }
        }

        return {-1,-1};

    }
};