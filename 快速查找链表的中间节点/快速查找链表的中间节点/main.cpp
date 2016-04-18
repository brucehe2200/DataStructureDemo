//
//  main.cpp
//  快速查找链表的中间节点
//
//  Created by 何淋淋 on 16/4/17.
//  Copyright © 2016年 何淋淋. All rights reserved.
//

#include <iostream>
using namespace std;
// 算法思想，采用快慢两个指针，同时从指针的头节点开始遍历。快指针每次一动2个结点，慢指针每次移动一个结点。经过L/2次移动之后就可以完成中间节点的寻找。
struct Node{
    int  data;
    Node* pNext;//  节点指针
};
typedef Node* LinkList;

// 头插法创建单链表
LinkList LinkedListCreatH()
{
    Node *L;
    L = (Node *)malloc(sizeof(Node));   //申请头结点空间
    L->pNext = NULL;                      //初始化一个空链表
    
    int x;                         //x为链表数据域中的数据
    cout<<"请输入数据"<<endl;
    while(scanf("%d",&x) != EOF)
    {
        Node *p;
        p = (Node *)malloc(sizeof(Node));   //申请新的结点
        p->data = x;                     //结点数据域赋值
        p->pNext = L->pNext;                    //将结点插入到表头L-->|2|-->|1|-->NULL
        L->pNext = p;
    }
    return L;
}
// 插入节点
void Insert(LinkList L,Node* node,int index){
    int i = 0;
    Node* ptemp = L;
    while (i < index&&ptemp->pNext != NULL) {// 找到节点
        ptemp = ptemp->pNext;
        i++;
    }
    node->pNext = ptemp->pNext;
    ptemp->pNext = node;
}
//  遍历单链表
void printList(LinkList L){
    while (L != NULL) {
        cout<<L->data<<endl;
        L = L->pNext;
    }
}
// 寻找单链表的中间节点
void findMinNode(LinkList L){
    Node* pNode = L;
    while (L != NULL&&pNode->pNext !=NULL) {
        L = L->pNext;
        pNode = pNode->pNext;
        pNode = pNode->pNext;
    }
    cout<<"中间节点为:"<<L->data<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    LinkList m_list = LinkedListCreatH();
    Node tempData;
    tempData.data = 9;
    Insert(m_list, &tempData, 4);
    printList(m_list);
    findMinNode(m_list);
    return 0;
}
