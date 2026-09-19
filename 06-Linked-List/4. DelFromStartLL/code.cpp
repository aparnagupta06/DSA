Node* DelFromStart(Node* head){
    if(head == nullptr)
        return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
