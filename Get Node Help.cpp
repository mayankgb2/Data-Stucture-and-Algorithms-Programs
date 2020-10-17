int GetNode(Node *head,int positionFromTail)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp=head;
    count = count - positionFromTail - 1 ;
    while(count--)
    {
        temp=temp->next;
    }
    return temp->data;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
