#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode headNode(0);
    ListNode* sumList = &headNode;
    int tempvalue = 0;
    while(l1||l2||tempvalue){
    // we use the linke list to implement the sum result.
       int sum        = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + tempvalue;
       tempvalue      = (sum)/10;
       sumList->next  = new ListNode((sum)%10);
       sumList        = sumList->next;
       l1             = l1? l1->next:l1;
       l2             = l2? l2->next:l2;
    }
    return headNode.next;
}
int main(){
  return 1;
}
