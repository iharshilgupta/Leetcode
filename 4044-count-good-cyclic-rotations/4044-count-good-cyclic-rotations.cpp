class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        long long firSum = 0;
        long long secSum = 0;
        for (int i = 0; i < n / 2; ++i) {
            firSum += nums[i];
            secSum += nums[i + n / 2];
        }
        if (firSum > secSum) {
            count++;
        }
        for (int i = 0; i < n-1; ++i) {
            int candi = nums[i];
            int h1 = nums[(i + n / 2) % n];
            int h2 = nums[i];
            firSum = firSum - candi + h1;
            secSum = secSum - h1 + h2;
            if (secSum < firSum) {
                count++;
            }
        }
        return count;
    }
};