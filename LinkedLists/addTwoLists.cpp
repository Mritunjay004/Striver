ListNode *addTwoNumbers(ListNode *p1, ListNode *p2) {
  ListNode *dummy = new ListNode();
  ListNode *curr = dummy;
  int carry = 0;
  while (p1 != NULL or p2 != NULL) {
    int x = p1 != NULL ? p1->val : 0;
    int y = p2 != NULL ? p2->val : 0;
    int sum = x + y + carry;
    carry = sum / 10;
    curr->next = new ListNode(sum % 10);
    curr = curr->next;
    if (p1 != NULL)
      p1 = p1->next;
    if (p2 != NULL)
      p2 = p2->next;
  }
  if (carry > 0)
    curr->next = new ListNode(carry);
  return dummy->next;
}