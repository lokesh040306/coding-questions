/*

vector<int> replaceWithRank(vector<int>& arr) {
    
    vector<int> sortedArr = arr;

    // Sort the array
    sort(sortedArr.begin(), sortedArr.end());

    // Create a map to store rank of each unique number
    unordered_map<int, int> rankMap;

    int rank = 1;

    for (int num : sortedArr) {

        // If this number is not already assigned a rank
        if (rankMap.find(num) == rankMap.end()) {
            rankMap[num] = rank;
            rank++;
        }
    }

    vector<int> result;
    for (int num : arr) {
        result.push_back(rankMap[num]);
    }

    return result;
}

*/