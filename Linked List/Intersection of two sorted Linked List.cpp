Node* findIntersection(Node* head1, Node* head2)
{
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    
    
    if(head1->data>head2->data) return findIntersection(head1,head2->next);
    
    if(head1->data<head2->data)  return findIntersection(head1->next,head2);
    
    Node* newNode=new Node(head1->data);
    newNode->next=findIntersection(head1->next,head2->next);
    
    
    
    return newNode;
}
