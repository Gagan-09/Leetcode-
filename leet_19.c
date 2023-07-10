#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *Create(int n)
{
    int i;
    struct ListNode *t, *first = NULL, *last;
    first = (struct ListNode *)malloc(sizeof(struct ListNode));
    /*if (n == 0)
        return NULL;*/
    printf("Enter %d elements:\n", n);
    scanf("%d", &first->val);
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct ListNode *)malloc(sizeof(struct ListNode));
        scanf("%d", &t->val);
        t->next = NULL;
        last->next = t;
        last = t;
    }
    return first;
}
int Count(struct ListNode *p)
{
    int n = 0;
    while (p != NULL)
    {
        n++;
        p = p->next;
    }
    return n;
}
struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    int count = Count(head);
    int i = 0;
    struct ListNode *p = head, *nd;
    for (; i < count - n - 1; i++)
    {
        p = p->next;
    }
    if (p->next == NULL)
    {
        printf("[]");
        return;
        
    }
    if( n== count){
        head=p->next;
        free(p);
        //Display
        return head;
    }
    nd = p->next;
    if (nd->next)
        p->next = nd->next;
    else
        p->next=NULL;
    free(nd);
    Display(head);
    // return head;
}
void Display(struct ListNode* head){
    printf("[");
    while(head!=NULL){
        if(head->next!=NULL)
        printf("%d,",head->val);
        else
        printf("%d",head->val);
        head=head->next;
    }printf("]");
}
int main()
{
    struct ListNode *head = NULL;
    int n, count;
    printf("Enter the number of elements in LL1: ");
    scanf("%d", &n);
    head = Create(n);
    printf("Enter the position of node to be removed from end: ");
    scanf("%d",&n);
    // count = Count(L1);
    // printf("No. of nodes: %d", count);
    head=removeNthFromEnd(head,n);
    //Display(head);
    return 0;
}