class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;
        
        while (left < right) {
            int minHeight = min(height[left], height[right]);
            maxArea = max(maxArea, minHeight * (right - left));

            // Move the pointer pointing to the smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};
