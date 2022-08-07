/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *prev=head;
    Node *temp=head->next;
    
    while(temp->next!=NULL){
        if(prev->data==temp->data){
            temp=temp->next;
        }
        else{
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
    }
    
    if(prev->data==temp->data)
        prev->next=NULL;
    else
        prev->next=temp;
    return head;
}
