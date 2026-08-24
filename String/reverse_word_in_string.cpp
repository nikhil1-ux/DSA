class Solution {
public:
    string reverseWords(string s) {
     
     int n = s.length() ;
     
     int right = n - 1;

     string ans;

     while(right >= 0){

        while(right >=0 && s[right] == ' '){
            right--;
        }

        if(right < 0){
            break;
        }
        int end = right;
        while(right >= 0 && s[right] != ' '){
         right--;
        }
        
        if( !ans.empty()){
          ans += " ";
        }

        ans += s.substr(right + 1, end - right);
         
        
     }

      return ans;
    }
};