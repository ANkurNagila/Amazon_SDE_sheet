/****************************************************************
	Following is the Linked list node structure already written:

	template <typename T>
	class LinkedListNode {
	public:
		T data;
		LinkedListNode* next;
		LinkedListNode* arbit;

		LinkedListNode(T data) {
			this->next = NULL;
			this-> arbit = NULL;
			this->data = data;
		}
	};

*****************************************************************/
#include<bits/stdc++.h>

LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    if(head==NULL || head->next==NULL)
        return head;
    
    LinkedListNode<int> *prev=head;
    LinkedListNode<int> *temp=head->next;
    prev->next=NULL;
    
    while(temp!=NULL){
        LinkedListNode<int> *after=temp->next;
        temp->next=prev;
        prev=temp;
        temp=after;
    }
    
    return prev;
}

LinkedListNode<int>* populateArbit(LinkedListNode<int>* head)
{
    priority_queue<pair<int,LinkedListNode<int> *>> x;
    LinkedListNode<int> *root=reverse(head);
    LinkedListNode<int> *temp=root;
    while(temp!=NULL){
        if(x.size()==0)
            temp->arbit=NULL;
        else{
            temp->arbit=x.top().second;
        }
        
        x.push({temp->data,temp});
        temp=temp->next;
    }
    
    head=reverse(root);
    
    return head;
}
