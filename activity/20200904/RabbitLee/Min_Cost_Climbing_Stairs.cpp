class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> f(n, 0);
        f[0] = cost[0];
        f[1] = cost[1];
        for (int i = 2; i < n; i++) {
            f[i] = min(f[i - 1], f[i - 2]) + cost[i];
        }
        return min(f[n - 2], f[n - 1]);
    }
};
