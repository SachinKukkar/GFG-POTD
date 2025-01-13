class Solution {
public:
    int maxWater(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, area = 0;
        while (l < r) {
            area = max(area, min(arr[l], arr[r]) * (r - l));
            arr[l] < arr[r] ? ++l : --r;
        }
        return area;
    }
};
