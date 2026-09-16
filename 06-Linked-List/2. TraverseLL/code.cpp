class Solution {
  public:
    vector<int> printList(Node *head) {
        
        vector<int>result;
        Node* temp = head;
        while(temp != nullptr)
        {
            result.push_back(temp->data);
            temp = temp->next;
        }
        return result;
    }
};
