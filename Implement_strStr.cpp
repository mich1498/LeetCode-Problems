/*
* Implement strStr(). Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
* Input: haystack = "hello", needle = "ll"
* Output: 2
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
      string s=haystack; 
      string k=needle; 
      if (s=="" && k=="") return 0;   
      if (s=="" && k!="") return -1;
      if (s!="" && k=="") return 0; 
      int index=-1 ,i; 
      if (s.size() < k.size() ) return -1; 
      for ( i=0; i < s.size();i++){
          if (s[i]!=k[0]) continue; 
          if (s[i]==k[0]){
              int temp=i;
              int j=0;
              int n=k.size();
              while( n > 0){
                if (s[i]==k[j])
                {   ++i; 
                    ++j;
                    n--;
                }
                else{
                    i=temp;
                    break; 
                }
            } 
              if (n==0){
                  index =temp;
                  break;
              }
              
          }
      }
        return index; 
    }
};
