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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != nullptr && head->val == val)
        {
            head = head->next; 
        }
        ListNode* fast = NULL;
        if(head != nullptr && head->next != NULL)
        {
            fast = head->next;
        }
        ListNode* slow = head;
        while(fast != nullptr && slow != nullptr)
        {
            bool found = true;
            if(fast->val == val && fast->next != NULL)
            {
                slow->next = fast->next;
                fast = fast->next;
                found = false;
            }
            if(fast->val == val && fast->next == NULL)
            {
                slow->next = NULL;
            }
            if(found)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        return head;
    }
};