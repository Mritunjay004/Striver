ListNode *removeNthFromEnd(ListNode *head, int n) {
  ListNode *dummy = new ListNode();
  dummy->next = head;
  ListNode *curr = dummy, *nth = dummy;

  for (int i = 1; i <= n + 1; i++)
    curr = curr->next;
  while (curr != NULL) {
    curr = curr->next;
    nth = nth->next;
  }
  nth->next = nth->next->next;
  return dummy->next;
}