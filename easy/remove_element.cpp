#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int swapper = 0;
        int pointer = 0;
        int temp = 0;
        int len = nums.size();
        while (pointer < len)
        {
            if (nums[swapper] == val)
            {
                if (nums[pointer] != val)
                {
                    // swap pointer and swapper
                    temp = nums[swapper];
                    nums[swapper] = nums[pointer];
                    nums[pointer] = temp;
                    swapper++;
                }
            }
            else
            {
                swapper++;
            }
            pointer++;
        }
        return swapper;
    }
};

int main()
{
    vector<int> nums{1, 1, 2, 234,2345,5234,2354,1,2435,634};
    int len = Solution().removeElement(nums, 1);
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
