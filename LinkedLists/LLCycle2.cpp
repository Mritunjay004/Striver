ListNode *detectCycle(ListNode *head) {
  if (!head and head->next)
    return NULL;
  ListNode *fast = head, *slow = head, *entry = head;

  while (fast->next and fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      while (slow != entry) {
        slow = slow->next;
        entry = entry->next;
      }
      return entry;
    }
  }
  return NULL;
}