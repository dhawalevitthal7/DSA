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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* newnode = &dummy;
        ListNode* temp = newnode;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                newnode->next = list1;
                list1 = list1->next;
                newnode=newnode->next;
            }
            else if(list1->val > list2->val){
                newnode->next = list2;
                list2 = list2->next;
                newnode = newnode->next;
            }
        }
        while(list1!=NULL){
            newnode->next = list1;
            list1 = list1->next;
            newnode=newnode->next;
        }
        while(list2!=NULL){
            newnode->next = list2;
            list2 = list2->next;
            newnode = newnode->next;
        }
        return temp->next;
    }
};