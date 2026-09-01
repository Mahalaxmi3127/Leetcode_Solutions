class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0];
        int high = 0;
        for (int weight : weights) {
            if (weight > low)
                low = weight;
            high += weight;
        }
        while (low < high) {
            int mid = (low + high) / 2;
            int daysNeeded = 1;
            int sum = 0;
            for (int weight : weights) {
                if (sum + weight <= mid) {
                    sum += weight;
                } else {
                    daysNeeded++;
                    sum = weight;
                }
            }
            if (daysNeeded <= days)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};