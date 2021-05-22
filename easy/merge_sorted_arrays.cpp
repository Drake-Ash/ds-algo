#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode();
        ListNode *result_pointer = result;
        ListNode *temp = nullptr;

        while (l1 && l2)
        {
            if (l1->val > l2->val)
            {
                temp = new ListNode(l2->val);
                l2 = l2->next;
            }
            else
            {
                temp = new ListNode(l1->val);
                l1 = l1->next;
            }
            result_pointer->next = temp;
            result_pointer = result_pointer->next;
        }
        if (l1)
            result_pointer->next = l1;
        if (l2)
            result_pointer->next = l2;
        return result->next;
    }
};

int main()
{
    ListNode l13 = ListNode(3);
    ListNode l12 = ListNode(2, &l13);
    ListNode l1 = ListNode(1, &l12);

    ListNode l23 = ListNode(4);
    ListNode l22 = ListNode(2, &l23);
    ListNode l2 = ListNode(1, &l22);

    ListNode *result = Solution().mergeTwoLists(&l1, &l2);
    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}