#include<stdio.h>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=INT_MIN;
        while(left<right){
            int area=min(height[left],height[right]) * (right-left);
            maxi=max(area,maxi);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxi;
    }
};