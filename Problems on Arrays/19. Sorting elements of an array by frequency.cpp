/*

vector<int> sortByFrequency(vector<int>& nums) {
    
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    // Custom comparator to sort by frequency descending,
    // and by value ascending if frequencies are equal
    auto cmp = [&](int a, int b) {
        if (freq[a] != freq[b]) return freq[a] > freq[b];
        return a < b;
    };

    // Sort using the comparator
    sort(nums.begin(), nums.end(), cmp);

    return nums;
}

*/