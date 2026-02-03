1class Solution {
2public:
3    int mySqrt(int x) {
4        int start=0;int end=x;long long mid;int ans;
5        while(start<=end)
6        {
7            mid=start+(end-start)/2;
8            if(mid*mid==x)
9            {
10                ans=mid;
11                break;
12            }
13            else if(mid*mid<x)
14            {
15                ans=mid;
16                start=mid+1;
17            }
18            else
19            {
20                end=mid-1;
21            }
22        }
23        return ans;
24    }
25};