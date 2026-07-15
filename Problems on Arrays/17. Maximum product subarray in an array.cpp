/*

int maxProductSubArray(vector<int>& arr) {

        // Store size of array
        int n = arr.size();

        // Initialize prefix and suffix product
        int pre = 1, suff = 1;

        int ans = INT_MIN;

        for (int i = 0; i < n; i++) {

            // Reset prefix if zero
            if (pre == 0) pre = 1;

            // Reset suffix if zero
            if (suff == 0) suff = 1;

            // Multiply prefix with current element from front
            pre *= arr[i];

            // Multiply suffix with current element from back
            suff *= arr[n - i - 1];

            // Update the maximum of all products seen so far
            ans = max(ans, max(pre, suff));
        }

        return ans;
    }
};

*/