 class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        int n = arr.size();

        d = d % n;  
  
   reverse(arr.begin(), arr.begin() + d);
  reverse(arr.begin() + d, arr.end());
 reverse(arr.begin(), arr.end());
            
        
    }
};


//right
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
      int n = nums.size();
        k = k % n;

        vector<int> temp(k);

               for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }


       for(int i = n - 1; i >= k; i--){
    nums[i] = nums[i - k];
}
        int j = 1;
      for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }


    }
};