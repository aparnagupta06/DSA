Node* insertAtStart(Node* head, int val)
{
  Node* temp = new Node(val);
  temp->next = head;
  return temp;
}
