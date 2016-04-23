//
//  main.cpp
//  链栈
// 栈氛围两种结构，一种是顺序栈，一种是链栈，在此以链栈作为示例代码
//

#include <iostream>
using namespace std;
// 创建函数模版
template <typename Type>

// 栈的节点元素
struct StackNode{
    Type data; //栈元素的数据内容
    StackNode* pNext;
};
typedef StackNode<int>* LinkStack;
// 创建一个链栈
LinkStack CreateLinkStack(){
    LinkStack list;
    list->pNext = NULL;
    return  list;
}
// add data
template <typename Type>
void Push(LinkStack list,StackNode<Type> node){
    StackNode<Type>* tempNode = new StackNode<Type>;
    tempNode->data = node.data;
    tempNode->pNext = list->pNext;
    list->pNext = tempNode;
}
//pop data
template <typename Type>
StackNode<Type>* Pop(LinkStack list){
    StackNode<Type> *node = NULL;
    node = list->pNext;
    list->pNext = node->pNext;
    node->pNext = NULL;
    return node;
}

// clear stackList and delete stackList
template <typename Type>
void clearStack(LinkStack list){
    StackNode<Type>* delNode;
    delNode = NULL;//  指向第一个结点
    while (list->pNext != NULL) {
        delNode = list->pNext;
        list->pNext = delNode->pNext;
        cout<<delNode->data<<endl;
        delete delNode;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    LinkStack sList = CreateLinkStack();
    StackNode<int> tempNode;
    for (int i = 0;i < 6;i++) {
        tempNode.data = i;
        Push(sList, tempNode);
    }
    clearStack<int>(sList);
    return 0;
}
