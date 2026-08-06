//brute force method it will avoid duplicacy

class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        
        int n1 = a.size();
        int n2 = b.size();
        
        vector<int> intersect;
        
        for(int i = 0; i < n1; i++) {
            
            
            for(int j = 0; j < n2; j++){
                
                bool found = false;
                
                
            for( int z = 0;  z < intersect.size(); z++){
                
                if(intersect[z] == b[j]){
                    
                    found = true;
                    break;
                }
                
               
            }
            
            if(!found && a[i] == b[j]){
                
                intersect.push_back(a[i]);
            }
            
            }
            
        }   
        
        return intersect ;
    }
        
};

// optimised solution

class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        
        while(i < a.size() && j < b.size()){
            
            if(a[i] > b[j]){
                j++;
            }
            
            else if (a[i] < b[j]){
                i++;
            }
            
            else{
                
               if( ans.empty() || ans.back() != a[i]){
                   
                 ans.push_back(a[i]);
                
        
                }
                i++;
                j++;
            }
        }
        
        return ans ;
        
    }
        
};