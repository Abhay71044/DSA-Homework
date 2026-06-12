# Week 2 - Day 5

Today I solved 3 mixed string problems from LeetCode.

## Problems Solved

### 1. Group Anagrams
- Sorted each string and used it as a key in a map.
- Grouped all strings having the same sorted form.

Time Complexity: O(n × k log k)
Space Complexity: O(n)

### 2. String Compression
- Used two pointers to compress consecutive characters.
- Stored character counts directly in the input array.

Time Complexity: O(n)
Space Complexity: O(1)

### 3. Longest Palindromic Substring
- Checked all possible substrings.
- Used a helper function to verify whether a substring is a palindrome.

Time Complexity: O(n³)
Space Complexity: O(1)

## Concepts Learned
- Anagrams
- Hash Map
- String Compression
- Palindrome Checking
- Brute Force Approach

## Author
Abhay