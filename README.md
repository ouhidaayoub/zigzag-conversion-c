# Zigzag Conversion
Given a string `s` and an integer `numRows`, rearrange `s` into a zigzag pattern on `numRows` rows. The zigzag pattern means that the characters of `s` are placed in a zigzag form: first vertically down the rows, then diagonally up to the top, and repeating this process until all characters are placed. Finally, read the zigzag pattern row by row to form the converted string.

For instance, given s = "PAYPALISHIRING" with numRows = 3, the characters are placed as follows (in fixed-width font):

    P   A   H   N  
    A P L S I I G  
    Y   I   R  

Reading line by line gives the output "PAHNAPLSIIGYIR".

Example 1:
Input: s = "PAYPALISHIRING", numRows = 3  
Output: "PAHNAPLSIIGYIR"

Example 2:
Input: s = "PAYPALISHIRING", numRows = 4  
Output: "PINALSIGYAHRPI"  
Pattern:

    P     I    N  
    A   L S  I G  
    Y A   H R  
    P     I

Example 3:
Input: s = "A", numRows = 1  
Output: "A"

Constraints:
- 1 <= s.length <= 1000  
- s consists of English letters (lower‑case and upper‑case), ‘,’ and ‘.’  
- 1 <= numRows <= 1000