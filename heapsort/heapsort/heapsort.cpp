// heapsort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void swap(int * a,int * b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
// ѡ��������Ϊ���ڵ�
void maxHeapify(int arr[],int start,int end)
{
    int dad = start;
    int son = 2*dad + 1;//���ӽڵ�
    while(son < end)// �ڷ�Χ��
    {
        if (son + 1 < end && arr[son] < arr[son +1])
        {// ���������ӽ׶�
            son++;
        }
        if (arr[dad]>arr[son])
        {// ���ڵ�����ӽڵ㣬��������ֱ�ӷ���
            return;
        }else
        {
            swap(&arr[dad], &arr[son]);
            dad = son;
            son = 2*dad + 1;//ѭ�������ӽڵ�����ӽڵ�Ĺ�ϵ
        }
    }
}
void heapSort(int arr[],int len)
{
  // ��ĩ�˵��ӽڵ㿪ʼ
    for (int i = len/2 -1;i >= 0;i--)
    {
        maxHeapify(arr,i,len); //����͵ĸ��ڵ㿪ʼ�������ѣ��ܱ�֤һ������ȡ����ÿһ���׶������ѡ�
    }
    // ������֮��Ĵ󶥶����
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    for (int j = len -1;j > 0;j--)
    {
        // ÿһ��ѭ����������Ԫ�غ͵ײ�Ԫ�ؽ��н������������µ������󶥶ѣ���������֮�󣬼��ɱ�֤���϶���
        // ����������
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

