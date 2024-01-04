class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node* current = head;
        Node* temp = nullptr;
    
        while (current != nullptr) {
 
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            current = current->prev;
        }
 
        if (temp != nullptr) {
            head = temp->prev;
        }
    
        return head;
    }
};