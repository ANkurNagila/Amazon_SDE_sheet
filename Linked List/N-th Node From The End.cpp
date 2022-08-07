/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node *reverse(Node *head){
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *prev=head;
    Node *temp=head->next;
    prev->next=NULL;
    
    while(temp!=NULL){
        Node *after=temp->next;
        temp->next=prev;
        prev=temp;
        temp=after;
    }
    
    return prev;
}

Node* nthNodeFromEnd(Node* head, int n)
{
    if(head==NULL)
        return head;
    
    Node *root=reverse(head);
    int i=0;
    Node *temp=root;
    while(i<n-1){
        temp=temp->next;
        i++;
    }
    
    return temp;
    
}
