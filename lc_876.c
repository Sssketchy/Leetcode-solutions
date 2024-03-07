/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* yoru = head;
    struct ListNode* jett = head;
    struct ListNode* sova = head;
    int cnt =1 ;
    while (sova->next!=NULL){
        cnt++;
        sova=sova->next;
    }
    cnt = (cnt/2)+1;
    int tp=1;
    while(yoru->next!=NULL && tp !=cnt){
        tp++;
        jett = jett->next;
        yoru->next=NULL;
        yoru = jett;
    }
    return yoru;
}
