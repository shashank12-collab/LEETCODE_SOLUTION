/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) 
//     {
    //     ListNode* fast = head;
    //     ListNode* slow = head;
    //    while(fast != nullptr && fast->next != nullptr)
    //    {
    //     slow = slow->next;
    //     fast = fast->next->next;

    //     if(slow == fast)
    //     {
    //         ListNode* loopdata = head;
    //         while(loopdata != slow)
    //         {
    //             loopdata = loopdata->next;
    //             slow = slow->next;
    //         }
    //         return loopdata;
    //     }
    //    }
    //    return nullptr;
    
//     }
// };

class Solution{
    public:
    ListNode* detectCycle(ListNode *head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                slow = head;
                while(slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};