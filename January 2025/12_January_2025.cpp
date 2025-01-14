lass Solution {
public:
    int maxWater(vector<int> &arr) {
        int left = 1, right = arr.size() - 2, lMax = arr[0], rMax = arr.back(), res = 0;
        while (left <= right) {
            if (lMax <= rMax) {
                res += max(0, lMax - arr[left]);
                lMax = max(lMax, arr[left++]);
            } else {
                res += max(0, rMax - arr[right]);
                rMax = max(rMax, arr[right--]);
            }
        }
        return res;
    }
};