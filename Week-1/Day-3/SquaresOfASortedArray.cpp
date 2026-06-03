#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int s=0;
        int e=nums.size()-1;
        int k=nums.size()-1;
        while(s<=e){
            int left=nums[s]*nums[s];
            int right=nums[e]*nums[e];
            if(left>right){
                ans[k]=left;
                k--;
                s++;
            }
            else{
                ans[k]=right;
                k--;
                e--;
            }
        }
        return ans;
    }
};