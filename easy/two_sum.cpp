#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> freqMap;
        for (int i = 0; i < nums.size(); i++)
        {
            i;
            if (freqMap.find(nums[i]) == freqMap.end())
                freqMap[nums[i]] = 1;
            else
                freqMap[nums[i]]++;
        }
        int first = -1;
        int second = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int minFreqCount = 1;
            if (target - nums[i] == nums[i])
                minFreqCount = 2;
            if (freqMap.find(target - nums[i]) != freqMap.end() && freqMap[nums[i]] >= minFreqCount)
            {
                first = i;
                for (int j = i + 1; j < nums.size(); j++)
                    if (target - nums[i] == nums[j])
                    {
                        second = j;
                        break;
                    }
                break;
            }
        }

        vector<int> result{first, second};
        return result;
    }
};

int main()
{
    vector<int> input{3, 3};
    vector<int> result = Solution().twoSum(input, 6);
    for (auto &i : result)
        cout << i << ' ';
    cout << '\n';
    return 0;
}
