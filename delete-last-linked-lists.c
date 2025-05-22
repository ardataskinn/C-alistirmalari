void delete_last(struct node** head) {
    struct node* temp;
    temp = *head;
    if (temp == NULL) {
        return;
    } else if ((*temp).next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        while (temp->next->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = NULL;
    } 
}
