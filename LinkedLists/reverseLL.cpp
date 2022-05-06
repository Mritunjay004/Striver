ListNode* reverseList(ListNode* head) {
	ListNode *dummy = NULL;
	while(head!=NULL){
	    ListNode *next = head->next;
	    head->next = dummy;
	    dummy = head;
	    head = next;
	}
	return dummy;
}