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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {

        if (list1 == nullptr && list2 == nullptr) return nullptr;
        ListNode* result = new ListNode(), *traverse = result;
        int nodeValue = 0;

        while (!(list1 == nullptr && list2 == nullptr))
        {
            if (list1 == nullptr)
            {
                nodeValue = list2->val;
                list2 = list2->next;
            }
            else if (list2 == nullptr)
            {
                nodeValue = list1->val;
                list1 = list1->next;
            }
            else
            {
                if (list1->val > list2->val)
                {
                    nodeValue = list2->val;
                    list2 = list2->next;
                }
                else
                {
                    nodeValue = list1->val;
                    list1 = list1->next;
                }
            }

            traverse->val = nodeValue;

            if (!(list1 == nullptr && list2 == nullptr))
            {
                traverse->next = new ListNode();
                traverse = traverse->next;
            }
        }

        
        return result;     
    }
};
