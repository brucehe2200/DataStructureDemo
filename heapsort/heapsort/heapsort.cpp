// heapsort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void swap(int * a,int * b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
// 选择最大的作为父节点
void maxHeapify(int arr[],int start,int end)
{
    int dad = start;
    int son = 2*dad + 1;//左子节点
    while(son < end)// 在范围内
    {
        if (son + 1 < end && arr[son] < arr[son +1])
        {// 交换两个子阶段
            son++;
        }
        if (arr[dad]>arr[son])
        {// 父节点大于子节点，正常现象，直接返回
            return;
        }else
        {
            swap(&arr[dad], &arr[son]);
            dad = son;
            son = 2*dad + 1;//循环处理子节点和孙子节点的关系
        }
    }
}
void heapSort(int arr[],int len)
{
  // 从末端的子节点开始
    for (int i = len/2 -1;i >= 0;i--)
    {
        maxHeapify(arr,i,len); //从最低的父节点开始创建最大堆，能保证一遍过后获取到的每一个阶段是最大堆。
    }
    // 调整完之后的大顶对输出
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    for (int j = len -1;j > 0;j--)
    {
        // 每一次循环，将顶部元素和底部元素进行交换，进而重新调整出大顶堆，这样遍历之后，即可保证自上而下
        // 均符合排序
        swap(&arr[j],&arr[0]);
        maxHeapify(arr,0,j);
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
    int arr[] = { 3, 5, 3, 0, 8, 6, 1, 5, 8, 6, 2, 4, 9, 4, 7, 0, 1, 8, 9, 7, 3, 1, 2, 5, 9, 7, 4, 0, 2, 6 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    heapSort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
	return 0;
}

