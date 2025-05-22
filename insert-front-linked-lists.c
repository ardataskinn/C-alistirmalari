struct node {
    int data;
    struct node* next;
};

void insert_head(struct node** bas,int yeniveri) {
    struct node* girdi;
    girdi = (struct node*)malloc(sizeof(struct node));
    (*girdi).data = yeniveri;
    (*girdi).next = *bas;
    *bas = girdi;
}

void prints(struct node* as) {
    struct node * temp;
    temp = as;
    while (temp != NULL) {
        printf("%d",temp->data);
        temp = temp->next;
    }
}

int main() 
{ 
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    (*head).data = 3;
    (*head).next = NULL;
    insert_head(&head,5);
    insert_head(&head,21);
    prints(head);
}

