"""
Given a string, find the length of the longest substring without repeating characters.
eg : Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
"""
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        substring = ''
        list_length=[] #empty list to store the lengths
        length=0
        for i in range(len (s)):
            if (s[i] not in substring):
                substring+=s[i] #add the char to the substirng
                length+=1 
            else:
                index = substring.index(s[i]) #get the index of s[i]
                list_length.append(length) # collect the length of the substring
                substring= s[i - length + index +1 : i +1]
                length=len(substring)
        list_length.append(length)
        return max(list_length)
