1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int first = -1, last = -1;
5        int n = nums.size();
6
7        // ---- Find first occurrence ----
8        int start = 0, end = n - 1;
9        while (start <= end) {
10            int mid = start + (end - start) / 2;
11            if (nums[mid] == target) {
12                first = mid;
13                end = mid - 1;   // move left
14            }
15            else if (nums[mid] < target) {
16                start = mid + 1;
17            }
18            else {
19                end = mid - 1;
20            }
21        }
22
23        // ---- Find last occurrence ----
24        start = 0;
25        end = n - 1;
26        while (start <= end) {
27            int mid = start + (end - start) / 2;
28            if (nums[mid] == target) {
29                last = mid;
30                start = mid + 1;   // move right
31            }
32            else if (nums[mid] < target) {
33                start = mid + 1;
34            }
35            else {
36                end = mid - 1;
37            }
38        }
39
40        return {first, last};
41    }
42};
43