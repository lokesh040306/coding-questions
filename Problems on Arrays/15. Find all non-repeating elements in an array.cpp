/*

void findNonRepeatingElement(vector<int>& nums) {
    
    unordered_map<int, int> hashMap;

    for (auto i : nums) hashMap[i]++;

    // If the count of elements equals 1, it is a non-repeating element
    for (auto pairInMap : hashMap)
        if (pairInMap.second == 1) cout << pairInMap.first << " ";
}

*/