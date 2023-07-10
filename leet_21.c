0/5
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *head,*l;
    if(!list1 && !list2 )return NULL;
    if (!list1)return list2;
    if(!list2)return list1;
    if(list1->val<list2->val){
        head=l=list1;
        list1=list1->next;
        l->next=NULL;
    }
    else
    {
        head=l=list2;
        list2=list2->next;
        l->next=NULL;
    }
    
    while(list1!=NULL && list2 != NULL){
        if(list1->val < list2->val){
            l->next=list1;
            l=list1;
            list1=list1->next;
            l->next=NULL;
        }
        else{
            l->next=list2;
            l=list2;
            list2=list2->next;
            l->next=NULL;
        }
        
    }
    if(list1!=NULL)l->next=list1;
    else l->next=list2;
    return head;
}
