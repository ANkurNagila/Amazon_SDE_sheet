/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/

Node* insert(int k, int val, Node *head) {
    Node *temp=new Node(val);
    
    if(k==0){
        temp->next=head;
        head->prev=temp;
        head=temp;
        return head;
    }
    
    int i=1;
    Node *temp1=head;
    while(i!=k && temp1->next!=NULL){
        temp1=temp1->next;
        i++;
    }
    
    if(temp1->next==NULL){
        temp1->next=temp;
        temp->prev=temp1;
        return head;
    }
    else{
        temp->next=temp1->next;
        temp1->next->prev=temp;
        temp1->next=temp;
        temp->prev=temp1;
        return head;
    }
    
}

