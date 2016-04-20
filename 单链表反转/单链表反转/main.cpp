//
//  main.cpp
//  单链表反转
//
//  Created by 何淋淋 on 16/4/20.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
struct Node{
    int  data;
    Node* pNext;//  节点指针
};
typedef Node* LinkList;

// 头插法创建单链表
LinkList LinkedListCreatH(int count)
{
    Node *L;
    L = (Node *)malloc(sizeof(Node));   //申请头结点空间
    L->pNext = NULL;                      //初始化一个空链表
    Node* temp = L;
    Node *p;//x为链表数据域中的数据
    for (int i = 1;i <= count; i++) {
        p = (Node*)malloc(sizeof(Node));
        p->data = i;
        temp->pNext = p;
        temp = temp->pNext;
    }    return L;
}
// 遍历链表
void  printList(LinkList L){
    
    while (L != NULL) {
        cout<<L->data<<endl;
        L=L->pNext;
    }
}
//反转链表
LinkList reverseList(LinkList L){
    Node* head = NULL;
    Node* temp;
    while (L != NULL) {
        temp = L;
        L = L->pNext;
        // 反转操作开始
        temp->pNext = head;
        head = temp;
    }
    return  head;
}
int main(int argc, const char * argv[]) {
    LinkList headList = LinkedListCreatH(7);
    printList(headList);
    LinkList reverserList;
    reverserList = reverseList(headList);
    printList(reverserList);
    return 0;
}
