1class Solution {
2public:
3    int addDigits(int num) {
4        while(num>9){
5            int ans = 0; int rem;
6            while(num!=0)
7            {
8                rem=num%10;
9                num/=10;
10                ans+=rem;
11            }
12            num=ans;
13        }
14  return num;
15    }
16};