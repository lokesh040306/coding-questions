/*

class BubbleSort {
public:
    vector<int> bubble_sort(vector<int>& arr) {
        
        int n = arr.size();

        for(int i = n - 1; i >= 0; i--) {

            // used to check whether the given array is sorted or not -> reduces the futher iterations
            int didSwap = 0;

            for(int j = 0; j <= n - 1; j++) {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }

            if(didSwap == 0) {
                break;
            }
        }

        return arr;
    }
};

*/