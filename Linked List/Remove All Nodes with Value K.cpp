/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *removeNodes(Node *head, int k) {
    
    while(head!=NULL && head->data==k)
        head=head->next;
    
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *prev=head;
    Node *temp=head->next;
    
    while(temp->next!=NULL){
        if(temp->data==k){
            temp=temp->next;
        }
        else{
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
    }
    
    if(temp->data==k)
        prev->next=NULL;
    else
        prev->next=temp;
    
    return head;
}
