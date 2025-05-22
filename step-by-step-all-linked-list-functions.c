/*let me define struct for linked list*/
struct node {
    int data;
    struct node* next;
};

/*creating first node*/

struct node* makenode(int data) {
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    (*head).data = data;
    (*head).next = NULL;
    
    return head;
}

int main() 
{ 
    struct node *head = makenode(5);
    printf("%d",(*head).data);

}



/*inserting with descending order*/

struct node* insert(struct node**list,int data) {
    struct node *np;
    if (np = makenode(data)) {
        struct node *prev,*curr;
        curr = *list;
        prev = NULL;
        while (curr && data < (*curr).data) {
            prev = curr;
            curr = (*curr).next;
        }
        (*np).next = curr;
        if (prev) {
            (*prev).next = np;
        } else {
            *list = np;
        }
    }
    return np;
}
