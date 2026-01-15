1class Solution {
2public:
3    int reverse(int x) {
4        int rem,ans=0;
5        while(x!=0)
6        {
7            rem=x%10;
8            x/=10;
9             if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
10                return 0;
11            ans=ans*10+rem;
12
13        }
14        return ans;
15    }
16};