class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
     int  n1 = a.size();
     int n2 = b.size();
     int i = 0;
     int j = 0;
     vector<int> unionit;
     
     while(i < n1 && j < n2){
         
         if(a[i] <= b[j]){
         if(unionit.size() == 0 || unionit.back() != a[i]){
             
             unionit.push_back(a[i]);
         }
             i++;
         }
         
         else{
              if(unionit.size() == 0 || unionit.back() != b[j]){
             
             unionit.push_back(b[j]);
         }
         j++;
         }
         
     }
     
       while (i < n1) {
            if (unionit.empty() || unionit.back() != a[i])
                unionit.push_back(a[i]);
            i++;
        }

        while (j < n2) {
            if (unionit.empty() || unionit.back() != b[j])
                unionit.push_back(b[j]);
            j++;
        }
     
     return unionit;
    }
};