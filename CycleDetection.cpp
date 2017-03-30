/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node *post = head;
    Node *prev = head;
    
    if(head == NULL)
        return false;
    
    while(post != NULL && post -> next != NULL){
        prev = prev -> next;
        post = post -> next -> next;
        if(prev == post)
            return true;
    }
    return false;
}
