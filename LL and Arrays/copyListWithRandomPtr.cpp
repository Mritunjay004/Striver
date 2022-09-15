Node *copyRandomList(Node *head)
{
    if (head == NULL)
        return head;
    Node *curr = head;

    // making copy list nodes in between
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = new Node(curr->val);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;

    // handling random ptrs
    while (curr != NULL)
    {

        curr->next->random = curr->random != NULL ? curr->random->next : NULL;
        curr = curr->next->next;
    }

    Node *org = head, *copy = head->next, *temp = copy;

    // handling next ptrs
    while (org != NULL)
    {
        org->next = org->next->next;
        copy->next = copy->next != NULL ? copy->next->next : copy->next;
        org = org->next;
        copy = copy->next;
    }
    return temp;
}
