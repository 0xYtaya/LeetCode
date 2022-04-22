/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *tmp,*newhead;
    if (!head || !head->next) return head;
    tmp = head->next;
    head->next = NULL;
    newhead = reverseList(tmp);
    tmp->next = head;
    return newhead;
}