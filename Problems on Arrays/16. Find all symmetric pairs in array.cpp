/*

void findSymPairs(vector<pair<int,int>>& arr) {

    set<pair<int,int>> st;

    for(int i = 0; i < arr.size(); i++) {

        int first = arr[i].first;
        int second = arr[i].second;

        // Check reverse pair
        if(st.find({second, first}) != st.end()) {
            cout << "(" << first << "," << second << ") ";
        }

        // Store current pair
        st.insert({first, second});
    }
}

*/