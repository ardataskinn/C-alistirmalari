void insert_tail(struct node** bas,int veri) {



    struct node* temp;
    struct node* yenigirdi = (struct node*)malloc(sizeof(struct node));

    if (*bas == NULL) {
        *bas = yenigirdi;
        (*bas)->data = veri;
        (*bas)->next = NULL;
        return;
    }

    temp = *bas;
    while (temp->next !=NULL) {
        temp = temp->next;
    }
    temp->next = yenigirdi;
    yenigirdi->next = NULL;
    yenigirdi->data =  veri;

}
