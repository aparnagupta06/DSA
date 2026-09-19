class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        
        Node* temp = head;
        //instead of temp->next->next you can use a temp pointer and prev pointer
        
        //NOTE : WHENEVER THERE IS NEED OF PREV POINTER MAKE SURE THAT YOU 
        //SEPARATELY CARE FOR THE SINGLE NODE CASE 
        
        while(temp->next->next != nullptr)
            temp = temp->next;
        
        delete temp->next;
        temp->next = nullptr;
        
        return head;
        
            
    }
};
