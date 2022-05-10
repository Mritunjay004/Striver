ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
  ListNode *tempA = headA;
  ListNode *tempB = headB;
  while (tempA != tempB) {
    tempA = tempA != NULL ? tempA->next : headB;
    tempB = tempB != NULL ? tempB->next : headA;
  }
  return tempA;
}