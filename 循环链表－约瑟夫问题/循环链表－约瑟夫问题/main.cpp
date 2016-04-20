//
//  main.cpp
//  模版C++
//
//  Created by 何淋淋 on 16/4/19.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename Type>

struct Node{
    Type  data;
    Node* pNext;//  节点指针
};

typedef Node<int> * LinkList;
// 头插法创建单链表
template <typename Type>
LinkList LinkedListCreatH(int m)
{
    Node<Type> *head;
    head = (Node<Type> *)malloc(sizeof(Node<Type>));   //申请头结点空间
    head->pNext = NULL;                      //初始化一个空链表
    head->data = 0;
    Node<Type>* temp = head;
    
    Node<Type> *p;
    for (int i = 1;i <= m; i++) {
        p = (Node<Type>*)malloc(sizeof(Node<Type>));
        p->data = i;
        temp->pNext = p;
        temp = temp->pNext;
    }
    temp->pNext = head->pNext;// 将指针指向头节点，形成循环链表
    // 删除头节点
    Node<Type>* delNode = head;
    head = head->pNext;
    free(delNode);
    return head;
}
// 解决约瑟夫环的问题,从编号为K的元素开始，每逢m则出列
template <typename Type>
void print_link(LinkList L,int k,int m){
    Node<Type>* ptemp = L;
    Node<Type>* delNode = NULL;
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
    LinkList L = LinkedListCreatH<int>(6);
    return 0;
}
