struct ListNode *swapPairs(struct ListNode *head)
{
	struct ListNode *curr, *newhead, *nextpair, *prev, *dummy = malloc(sizeof(struct ListNode));

	dummy->next = head;
	prev = dummy;
	curr = head;
	if (!head || !head->next)
		return head;
	while (curr && curr->next)
	{
		newhead = curr->next;
		nextpair = curr->next->next;
		newhead->next = curr;
		curr->next = nextpair;
		prev->next = newhead;
		prev = curr;
		curr = nextpair;
	}
	return dummy->next;
}