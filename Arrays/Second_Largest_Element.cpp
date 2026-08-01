brute force
class Solution {
public:
    int getSecondLargest(vector<int>& nums) {

        int largest, secondLargest = -1;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        largest = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > secondLargest && nums[i] != nums[n - 1]) {
                secondLargest = nums[i];
                break;
            }
        }

        return secondLargest;
    }
};

//better 

class Solution {
public:
    int getSecondLargest(vector<int>& nums) {

      int largest = nums[0] ;
      int n = nums.size();
      int secondLargest = -1;
      
      
      for( int i = 1; i < n ; i++) {
          
         if(nums[i]>largest){
             
             largest = nums[i] ;
             
         }
      }
      
      for( int i = 0; i <= n-1; i++ ){
          
          if(largest != nums[i] && nums[i] > secondLargest){
              
              secondLargest = nums[i];
          }
      }
      return secondLargest;
    }
};

// optimal solution

class Solution {
public:
    int getSecondLargest(vector<int>& nums) {

   
  int largest = nums[0];
  
  int secondlargest =-1;
  
  int n = nums.size();
  
  for(int i = 1; i < n; i++ ){
      
      if(nums[i] > largest)
      {
          
          secondlargest = largest;
          largest = nums[i];
         
  }
  else if(nums[i] < largest && nums[i]>secondlargest ){
      
      secondlargest = nums[i];
      
  }
  }
    return secondlargest;
    
}
    
};
