class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        cleaned_string  = "".join(char.lower() for char in s if char.isalnum())

        return cleaned_string == cleaned_string[::-1]