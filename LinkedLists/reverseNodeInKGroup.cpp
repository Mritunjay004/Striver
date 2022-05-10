ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode *dummy = new ListNode(0,head);
    ListNode *curr = head;
    ListNode *prev = dummy;
    
    while(curr!=NULL){
        int listIndex = 0;
        ListNode *tail = curr;
        while(curr!=NULL and listIndex<k){
            curr = curr->next;
            listIndex++;
        }
        if(listIndex!=k)
            prev->next=tail;
        else{
            prev->next = reverseList(tail,k);
            prev = tail;
        }    
    }
    return dummy->next;
}
    
ListNode* reverseList(ListNode* head,int k) {
    ListNode *dummy = NULL;
    while(k-- > 0){
        ListNode *next = head->next;
        head->next = dummy;
        dummy = head;
        head = next;
    }
    
    return dummy;
}