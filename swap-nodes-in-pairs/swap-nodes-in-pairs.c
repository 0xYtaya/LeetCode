struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
	struct ListNode* current;
	struct ListNode* prev;
	struct ListNode* nextpair;
	struct ListNode* second;
    
    if (!head || !head->next)
        return head;
	prev = dummy;
	current = head;
	while (current && current->next)
	{
		// save ptrs
		nextpair = current->next->next;
		second = current->next;

		// reverse ptrs
		second->next = current;
		current->next = nextpair;
		prev->next = second;

		// update ptrs
		prev = current;
		current = nextpair;
	}
	return dummy->next;
}