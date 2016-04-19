//
//  main.cpp
//  循环链表－约瑟夫问题
//
//  Created by 何淋淋 on 16/4/18.
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
LinkList LinkedListCreatH(int m)
{
    Node *head;
    head = (Node *)malloc(sizeof(Node));   //申请头结点空间
    head->pNext = NULL;                      //初始化一个空链表
    head->data = 0;
    Node* temp = head;

    Node *p;
    for (int i = 1;i <= m; i++) {
        p = (Node*)malloc(sizeof(Node));
        p->data = i;
        temp->pNext = p;
        temp = temp->pNext;
    }
    temp->pNext = head->pNext;// 将指针指向头节点，形成循环链表
    // 删除头节点
    Node* delNode = head;
    head = head->pNext;
    free(delNode);
    return head;
}
// 解决约瑟夫环的问题,从编号为K的元素开始，每逢m则出列
void print_link(LinkList L,int k,int m){
    Node* ptemp = L;
    Node* delNode = NULL;
    for (int i = 0; i < k; i++) {
        ptemp = ptemp->pNext;
    }
    cout<<"输出约瑟夫环的结果 :"<<endl;
    while (ptemp->pNext != ptemp) {// 进行循环输出
        for (int i = 0;i < m; i++) {
            ptemp = ptemp->pNext;
        }
        delNode = ptemp->pNext;
        cout<<delNode->data<<endl;
        ptemp->pNext = ptemp->pNext->pNext;
        free(delNode);// 删除节点
        
    }
    cout<<ptemp->data<<endl;
    free(ptemp);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    LinkList L = LinkedListCreatH(5);
    print_link(L,3,3);
    return 0;
}
