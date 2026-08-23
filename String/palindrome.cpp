class Solution {
public:
    bool isPalindrome(string s) {
   
   int n = s.length();
   string ans ="";

   for(int i = 0; i < n; i++){
    if(isalnum(s[i])){
        ans += tolower(s[i]);
    }
   }
    int m = ans.length();
   for(int i = 0; i < m/2; i++){
    if(ans[i] != ans[m-1-i]){
        return false;
    }
   }

   return true;

    }
};

class Solution {
public:
    bool isPalindrome(string s) {
     int n = s.length();
     int i = 0;
     int j = n-1;

     while(i < j){
        while(i < j && !isalnum(s[i] )){
            i++;
        }
        while(i < j && !isalnum(s[j])){
            j--;
        }
       if(i < j && tolower(s[i]) != tolower(s[j])){
        return false;
       }
        i++;
        j--;
     }
     return true;
  
    }
};