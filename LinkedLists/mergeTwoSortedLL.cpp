ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  ListNode *dummy = new ListNode();
  ListNode *curr = dummy;
  while (list1 != NULL and list2 != NULL) {
    if (list1->val <= list2->val) {
      curr->next = list1;
      list1 = list1->next;
    } else {
      curr->next = list2;
      list2 = list2->next;
    }
    curr = curr->next;
  }
  curr->next = list1 != NULL ? list1 : list2;
  return dummy->next;
}