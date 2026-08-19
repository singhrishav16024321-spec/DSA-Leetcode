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

    // Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (left != nullptr && right != nullptr) {

            if (left->val <= right->val) {
                temp->next = left;
                left = left->next;
            }
            else {
                temp->next = right;
                right = right->next;
            }

            temp = temp->next;
        }

        // If anything is left in either list
        if (left != nullptr) {
            temp->next = left;
        }
        else {
            temp->next = right;
        }

        return dummy.next;
    }


    // Merge Sort
    ListNode* sortList(ListNode* head) {

        // 0 or 1 node is already sorted
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find the middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list
        ListNode* right = slow->next;
        slow->next = nullptr;

        // Sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge the sorted halves
        return merge(left, right);
    }
};