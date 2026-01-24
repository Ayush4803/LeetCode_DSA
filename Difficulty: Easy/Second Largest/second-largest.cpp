class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size(); // size of the array
        int ans = -1;

        // 1st pass: find the largest element
        for(int i = 0; i < n; i++) {
            if(arr[i] > ans)
                ans = arr[i];
        }

        int second = -1;
        // 2nd pass: find the largest element less than 'ans'
        for(int i = 0; i < n; i++) {
            if(arr[i] != ans)
                second = max(second, arr[i]);
        }

        return second;
    }
};
