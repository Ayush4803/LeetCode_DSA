1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n= nums.size();
5        int high=n-1;int low=0;int mid;
6        while(low<=high)
7        {
8            mid=(high+low)/2;
9            if(nums[mid]==target)
10            return mid;
11            else if(nums[mid]<target)
12        low=mid+1;
13        else
14        high=mid-1;
15        }
16        return -1;
17
18    }
19
20};