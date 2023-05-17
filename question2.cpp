class Node {
public:
    int data;
    Node* next;
};
 

void push(Node** headref, int newdata)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 

void deleteNode(Node** headref, int position)
{
 
    
    if (*headref == NULL)
        return;
 
   
    Node* temp = *head_ref;
 
    
    if (position == 0) {
 
        
        *head_ref = temp->next;
 
       
        free(temp);
        return;
    }
 
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;
    Node* next = temp->next->next;
    free(temp->next); 
    temp->next = next;
}


time complexity : o(1).