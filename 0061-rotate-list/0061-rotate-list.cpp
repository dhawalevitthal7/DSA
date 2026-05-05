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
        if (!head || !head->next || k == 0) return head;
        int cnt = 1;
        while( temp->next != nullptr){
            cnt ++;
            temp = temp->next;
        }
        temp->next = head;
        int size = cnt - (k%cnt);
        ListNode* Tail = head;
        while(size>1){
            Tail = Tail->next;
            size--;
        }
        ListNode* NewHead = Tail->next;
        Tail->next = nullptr;
        return NewHead;
    }
};