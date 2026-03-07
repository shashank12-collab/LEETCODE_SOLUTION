/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* temp = head;
       ListNode* tail = head;
       if (!head || !head->next || k == 0) return head; 
       int length = 1;
       while(tail->next != nullptr)
       {
        tail = tail->next;
        length++;
       }
       if(k % length == 0)
       {
        return head;
       }
       k = k % length;
       tail->next = head;
       ListNode* newlast = head;
       for(int i = 1 ; i < length - k ; i++)
       {
        newlast = newlast->next;
       }
       head = newlast->next;
       newlast->next = nullptr;
       return head;
    }
};