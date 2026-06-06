#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        while(low<high){
            char ch=s[low];
            s[low]=s[high];
            s[high]=ch;
            low++;
            high--; 
        }
    }
};