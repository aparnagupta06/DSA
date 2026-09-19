Node* deleteKth(Node* head, int k){
  if(head == nullptr || k<=0)
      return nullptr;
  if(k == 1)
  {
      Node* temp = head;
      head = head->next;
      delete temp;
      return head;
  }

  // WHEREVER WE NEED TO KEEP A PREVIOUS POINTER THERE SINGLE NODE MUST BE TAKEN CARE OF SEPARATELY
  int cnt = 0;
  Node* temp = head;
  Node* prev = nullptr;
  while(temp != nullptr){
      cnt++;
      if(cnt == k)
      {
        prev->next = temp->next;
        delete temp;
        break;
      }
      prev = temp;
      temp = temp->next;
  }
  return head;    
}
