bool isPalindrome(ListNode *head) {
  ListNode *slow = head, *fast = head;
  while (fast->next and fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  slow->next = reverseList(slow->next);

  slow = slow->next;
  while (slow) {
    if (head->val != slow->val)
      return false;
    head = head->next;
    slow = slow->next;
  }
  return true;
}

ListNode *reverseList(ListNode *head) {
  ListNode *dummy = NULL;
  while (head != NULL) {
    ListNode *next = head->next;
    head->next = dummy;
    dummy = head;
    head = next;
  }
  return dummy;
}