class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // Step 1: If the array has less than 2 elements, we cannot find a pair
        if (arr.size() < 2) return {};

        // Step 2: Sort the array so we can use two pointers
        sort(arr.begin(), arr.end());

        // Step 3: Initialize variables
        vector<int> closestPair;  // To store the pair with the closest sum
        int minDiff = INT_MAX;    // Smallest difference between sum and target

        // Step 4: Use two pointers to find the closest pair
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int sum = arr[left] + arr[right];      // Calculate the current pair's sum
            int diff = abs(target - sum);         // Calculate how close this sum is to the target

            // Step 5: Update the closest pair if this is the smallest difference
            if (diff < minDiff) {
                minDiff = diff;                   // Update the smallest difference
                closestPair = {arr[left], arr[right]}; // Update the closest pair
            }

            // Step 6: Move the pointers to explore other pairs
            if (sum < target) {
                left++;    // Increase the sum by moving the left pointer to the right
            } else {
                right--;   // Decrease the sum by moving the right pointer to the left
            }
        }

        return closestPair;  // Return the closest pair
    }
};
