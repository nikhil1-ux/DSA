//brute force;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector <int> pos,neg;
        int n = nums.size();

        for(int i = 0; i < n; i++){
          if(nums[i] >0){
            pos.push_back(nums[i]);
          }
          else{
            neg.push_back(nums[i]);
          }
        }
        vector <int> ans;
        for(int i = 0; i < n/2; i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};

// optimized approach;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
    int n = nums.size();
    int pos = 0;
    int neg = 1;
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        if(nums[i] > 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    return ans;
    }
};