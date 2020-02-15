SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
    else
    {
        if (head1->data < head2->data)
        {
            SinglyLinkedListNode *restA = head1->next;
            head1->next = mergeLists(restA, head2);
            return head1;
        }
        else
        {
            SinglyLinkedListNode *restB = head2->next;
            head2->next = mergeLists(head1, restB);
            return head2;
        }
    }
}