class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sum = 0;
        long long n = arr.size() + 1;

        for (int i = 0; i < arr.size(); i++)
            sum += arr[i];

        long long total = n * (n + 1) / 2;

        return (int)(total - sum);
    }
};
